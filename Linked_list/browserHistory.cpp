//https://leetcode.com/problems/design-browser-history/
class Node{
    public:
        string val;
        Node* next;
        Node* back;

        Node(string data){
            val=data;
            next=NULL;
            back=NULL;
        }
        Node(string data,Node* next1,Node* back1){
            val =data;
            next=next1;
            back=back1;
        }

};
class BrowserHistory {
public:
    Node* head;
    Node* dummy;
    BrowserHistory(string homepage) {
        head=new Node(homepage);
        dummy=head;
    }
    
    void visit(string url) {
        dummy->next=new Node(url);
        dummy->next->back=dummy;
        dummy=dummy->next;
    }
    
    string back(int steps) {

        while(steps-- && dummy->back!=NULL){
            dummy=dummy->back;
        }
        return dummy->val;
    }
    
    string forward(int steps) {
        while(steps-- && dummy->next!=NULL){
            dummy=dummy->next;
        }
        return dummy->val;;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */