/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfsTraverse(Node* node, unordered_map<Node*,Node*>&oldToNew){
        //we are storing original and new in hashmap
        Node* copy = new Node(node->val);
        oldToNew[node] = copy;

        vector<Node*> neighbor;
        for(auto it: node->neighbors){
            if(oldToNew.find(it) != oldToNew.end()){
                neighbor.push_back(oldToNew[it]);
            }
            else{
                neighbor.push_back( dfsTraverse(it, oldToNew) );
            }
        }
        copy->neighbors = neighbor;
        return copy;
    }

    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        else if(node->neighbors.size() == 0){
            Node* copy = new Node(node->val);
            return copy;
        }
        unordered_map<Node*,Node*>oldToNew;
        return dfsTraverse(node, oldToNew);
    }
};