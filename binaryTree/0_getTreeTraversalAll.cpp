//https://www.naukri.com/code360/problems/tree-traversals_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>>vp;

    if(root==NULL)return vp;
    vector<int>vp1;
    vector<int>vp2;
    vector<int>vp3;
    pair<TreeNode*,int>pr(root,1);
    stack<pair<TreeNode*,int>>st;

    st.push(pr);
    while(!st.empty()){
        auto &it=st.top();

        if(it.second==1){
            vp1.push_back(it.first->data);
            it.second++;
            if(it.first->left!=NULL)
              st.push({it.first->left, 1});

        }
        else if(it.second==2){
            vp2.push_back(it.first->data);
            it.second++;
            if(it.first->right!=NULL)
              st.push({it.first->right, 1});
        }
        else {
            vp3.push_back(it.first->data);
            st.pop();
        }
    }
    vp.push_back(vp2);
    vp.push_back(vp1);
    vp.push_back(vp3);
    return vp;
}