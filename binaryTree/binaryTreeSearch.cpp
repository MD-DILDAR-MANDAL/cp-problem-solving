//BINARY SEARCH TREE
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node* rightsubtree;
        Node* leftsubtree;
        Node(){
            rightsubtree = NULL;
            leftsubtree = NULL;
            value = 0;
        }
        Node(int val){
            rightsubtree = NULL;
            leftsubtree = NULL;
            value = val;
            }
};
void insertInBst(int value,Node** tree){
    if(*tree == NULL){
    Node *curr = new Node(value);
    *tree = curr;
    return;
    }
    Node* cuurentNode = *tree;
    Node* parent;
    while(cuurentNode != NULL){
        parent = cuurentNode;
        if(value <= cuurentNode->value)
            cuurentNode = cuurentNode->leftsubtree;
        else cuurentNode = cuurentNode->rightsubtree;
        }
        if(value<parent->value)
            parent->leftsubtree = new Node(value);
        else parent->rightsubtree = new Node(value);
}
bool searchNodeInBst(Node* tree, int value){
    if(tree == NULL) return false;
    Node* cuurentNode = tree;
    while(cuurentNode != NULL){
        if(cuurentNode->value == value)
            return true;
        if(value < cuurentNode->value)
            cuurentNode = cuurentNode->leftsubtree;
        else cuurentNode = cuurentNode->rightsubtree;
        }
    return false;
}
void traversetree(Node* tree){
    if(tree == NULL)
        return;
    traversetree(tree->leftsubtree);
    cout << tree->value << " ";
    traversetree(tree->rightsubtree);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    Node* tree = NULL;
    for(int i = 0;i < t;i++){
        int value;
        cin >> value;
        insertInBst(value,&tree);
        }
        traversetree(tree);
        cout << endl;
        cout << searchNodeInBst(tree,4)<< endl;
        cout << searchNodeInBst(tree,8)<< endl;
	return 0;
}
