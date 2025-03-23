struct Node{
    Node* links[26];
    bool flag;

    bool containsKey(char ch){
        return (links[ch -'a'] != NULL);
    }
    void puts(char ch, Node* node){
        links[ch - 'a'] = node;
    }
    Node* get(char ch){
        return links[ch - 'a'];
    }
    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
};

class Trie {
private:
    Node* root;

public:
    Trie() {
        root = new Node(); 
    }
    
    void insert(string word) {
        Node* dummy = root;
        for(int i = 0;i < word.size();i++){
            if(!dummy->containsKey(word[i])){
                dummy->puts(word[i], new Node());
            }
            dummy = dummy->get(word[i]);
        }
        dummy->setEnd();
    }
    
    bool search(string word) {
        Node* dummy = root;
        for(int i = 0;i < word.size();i++){
            if(!dummy->containsKey(word[i])){
                return false;
            }
            dummy = dummy->get(word[i]);
        }
        return dummy->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node* dummy = root;
        for(int i = 0;i < prefix.size();i++){
            if(!dummy->containsKey(prefix[i])){
                return false;
            }
            dummy = dummy->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */