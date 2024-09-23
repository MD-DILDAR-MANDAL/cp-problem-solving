//https://leetcode.com/problems/binary-tree-level-order-traversal/
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vp;
        if(root == NULL) return vp;
        int level=0;
        levelcall(vp,root,level);
        return vp;
    }
    private: 
        void levelcall(vector<vector<int>>&vp,TreeNode* root,int level){
            if(vp.size()<level+1){
                vp.push_back({});
            }

            vp[level].push_back(root->val);

            if(root->left!=NULL)
            levelcall(vp,root->left,level+1);
    
            if(root->right!=NULL)
            levelcall(vp,root->right,level+1);
    
        }
};