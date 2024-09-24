//https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vp;
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        TreeNode* tmp;
        
        if (root==NULL) return vp;
        
        st1.push(root);
        while(!st1.empty()){
            tmp=st1.top();
            st1.pop();
            st2.push(tmp);

            if(tmp->left!=NULL)
                st1.push(tmp->left);
            
            if(tmp->right!=NULL)
                st1.push(tmp->right);
        }

        while(!st2.empty()){
            vp.push_back(st2.top()->val);
            st2.pop();
        }
        return vp;
    }
};