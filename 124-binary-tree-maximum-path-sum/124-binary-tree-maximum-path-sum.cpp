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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
    int maxPathDown(TreeNode* node,int &maxi)
    {
        if(node==NULL)return 0;
        int left=max(0,maxPathDown(node->left,maxi));
        int right=max(0,maxPathDown(node->right,maxi));
        int val=node->val;
        maxi=max(maxi,(left+right)+val);
        return max(left,right)+val;
    }
};