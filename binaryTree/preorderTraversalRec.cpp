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
        vp.push_back(root->val);
        for(auto it : preorderTraversal(root->left)){
            vp.push_back(it);
        }
        for(auto it : preorderTraversal(root->right)){
            vp.push_back(it);
        }
        return vp;
    }
};