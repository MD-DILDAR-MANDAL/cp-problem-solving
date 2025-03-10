//https://leetcode.com/problems/diameter-of-binary-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int diameter = 0;
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        int lh = 0, rh = 0;
        lh = maxDepth(root->left);
        rh = maxDepth(root->right);
        diameter = max(diameter, lh + rh);
        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return diameter;
    }
};