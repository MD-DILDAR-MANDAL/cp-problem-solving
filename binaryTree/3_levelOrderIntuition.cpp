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
    vector <int>child(TreeNode* root){
        vector<int>vp;
        if(root->left !=NULL)
            vp.push_back(root->left->val);
        if(root->right !=NULL)
            vp.push_back(root->right->val);
            return vp;
    }

    vector <TreeNode*>childInd(TreeNode* root){
        vector<TreeNode*>vp;
        if(root->left !=NULL)
            vp.push_back(root->left);
        if(root->right !=NULL)
            vp.push_back(root->right);
            return vp;
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vp;
        if(root==NULL) return vp;
        vector<int>ans;
        ans.push_back(root->val);
        vp.push_back(ans);
        ans.clear();
        vector<TreeNode*>ind={root};
        
        while(!ind.empty()){
        ans={};
        vector<TreeNode*>tmp2={};

        for(auto it : ind){
            auto tmp3=child(it);
            auto tmp4=childInd(it);
            ans.insert(ans.end(),tmp3.begin(),tmp3.end());
            tmp2.insert(tmp2.end(),tmp4.begin(),tmp4.end());
        }
        if(!ans.empty())
         vp.push_back(ans);
        ans.clear();
        ind.clear();
        ind=tmp2;
        tmp2.clear();
    }
    return vp;
    }
};