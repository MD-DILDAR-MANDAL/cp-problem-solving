#include<iostream>

using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int x){
        val=x;
        left=right=NULL;
        cout<<val;
    }
};

int main(){
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    Node* dummy=root;
    cout<<"done";
}