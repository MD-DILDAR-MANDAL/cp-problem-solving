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
    void postStore(TreeNode* dummy, vector<int>&vp){
        if(dummy->left != NULL){
            postStore(dummy->left,vp);
        }
        if(dummy->right!=NULL){
            postStore(dummy->right,vp);
        }

        vp.push_back(dummy->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int>vp;
       if(root!=NULL)
        postStore(root,vp);
       return vp;
    }
};