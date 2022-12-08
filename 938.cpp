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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)   return 0;
        if(!root->left && !root->right && low<=root->val && high>=root->val) return root->val;

        TreeNode *lt=root->left;
        TreeNode *rt=root->right;
        int a=rangeSumBST(lt,low,high);
        int b=rangeSumBST(rt,low,high);

        if(low<=root->val && high>=root->val)   return a+b+root->val;
        else    return a+b;
    }
};
