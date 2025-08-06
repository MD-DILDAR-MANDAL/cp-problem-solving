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
       stack<TreeNode*>st;
       while(root!=NULL || !st.empty()){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                TreeNode* tmp=st.top()->right;
                if(tmp==NULL){
                    tmp=st.top();
                    st.pop();
                    vp.push_back(tmp->val);

                    while(!st.empty() && tmp==st.top()->right){
                        tmp=st.top();
                        st.pop();
                        vp.push_back(tmp->val);
                    }
                 }
                else{
                    root=tmp;
                 }
            }
       }
       return vp; 
    }
};