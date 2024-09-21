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
        vector<int> vp;

        if(root==NULL)return vp;
        
        stack<TreeNode*>st;
        st.push(root);
        
        TreeNode* dummy=root;

        while(!st.empty()){
            dummy=st.top();
            vp.push_back(dummy->val);
            st.pop();
            if(dummy->right!=NULL){
                st.push(dummy->right);
            }
            if(dummy->left!=NULL){
                st.push(dummy->left);
            }
        }
        return vp;
    }
};