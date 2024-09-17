//https://leetcode.com/problems/binary-tree-preorder-traversal/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root){
        vector<int>vp;
        if(root==NULL){
            return vp;
        }
        if(root->right==NULL && root->left==NULL){
            vp.push_back(root->val);
            return vp;
        }

        TreeNode* dummy=root;
        stack<TreeNode*>st;

        while(!st.empty() ||dummy!=NULL){
            
            vp.push_back(dummy->val);
            
            if(dummy->right!=NULL)
             st.push(dummy->right);
            
            if(dummy->left!=NULL){
                dummy=dummy->left;
            }
            else if(!st.empty()){
                dummy = st.top();
                st.pop();
            }
            else{
                dummy=NULL;
            }
        }
        return vp;
    }
};