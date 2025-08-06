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
        vector<int>vpt;
        if(root==NULL)return vp;
        
        queue<TreeNode*>qu;
        TreeNode* tmp;
        qu.push(root);
        int size= 0;
        while(!qu.empty()){
            size=qu.size();

            while(size){
                tmp=qu.front();
                vpt.push_back(tmp->val);
                qu.pop();
                if(tmp->left!=NULL)
                    qu.push(tmp->left);
                if(tmp->right!=NULL)
                    qu.push(tmp->right);
                size--;
            }
            vp.push_back(vpt);
            vpt.clear();
        }
    return vp;

    }
};