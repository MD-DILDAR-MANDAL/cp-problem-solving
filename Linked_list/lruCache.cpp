// https://leetcode.com/problems/lru-cache/

class LRUCache {
public:
    class Node {
    public:
        int key;
        int val;
        Node * next;
        Node * back;
        Node(int data1,int data2){
            key = data1;
            val = data2;
            next=nullptr;
            back=nullptr;
        }
    };
    void deleteNode(Node* dummy){
        dummy->back->next=dummy->next;
        dummy->next->back=dummy->back;

    }
    void addAfterHead(Node* dummy){
        dummy->next=head->next;
        head->next->back=dummy;
        head->next=dummy;
        dummy->back=head;
    }

    map<int,Node*>mp;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    int length=0;

    LRUCache(int capacity) {
        length=capacity;
        mp.clear();
        head->next=tail;
        tail->back=head;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;

        Node* dummy = mp[key];
        deleteNode(dummy);
        addAfterHead(dummy);

        return dummy->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* dummy=mp[key];
            dummy->val=value;
            deleteNode(dummy);
            addAfterHead(dummy);
        }
        else{
            if(mp.size()==length){

                Node* dummy=tail->back;
                deleteNode(dummy);
                mp.erase(dummy->key);
            }

            Node * tmp=new Node(key,value);
            mp[key]=tmp;
            addAfterHead(tmp);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */