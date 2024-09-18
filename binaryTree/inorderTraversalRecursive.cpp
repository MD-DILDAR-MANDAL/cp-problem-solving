//https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    void inorderStore(TreeNode* dummy,vector<int>& vp){

        if(dummy->left!=NULL)
        inorderStore(dummy->left,vp);
        
        vp.push_back(dummy->val);

        if(dummy->right!=NULL)
        inorderStore(dummy->right,vp);


    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vp;
        if(root==NULL)return vp;
        inorderStore(root,vp);
        return vp;
    }
};