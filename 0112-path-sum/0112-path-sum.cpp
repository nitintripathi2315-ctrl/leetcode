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
    bool ans = false;
    void func(TreeNode* root , int targetSum , int sum){
        if(root == NULL) 
        {return;
        }
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                ans = true;
            }return;
        }
        func(root->left, targetSum , sum);
        func(root->right, targetSum , sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum ) {
        func(root, targetSum , 0);
        return ans;
    }
};