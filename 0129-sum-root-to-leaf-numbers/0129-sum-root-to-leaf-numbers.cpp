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
    int sum = 0;
    void func(TreeNode* root , int currsum ){
        if(root == NULL) return;
        currsum = currsum * 10 + root->val;
        if(root->left == NULL && root->right == NULL){
            sum += currsum;
        }
        func(root->left, currsum );
        func(root->right, currsum );
        return;
    }
    int sumNumbers(TreeNode* root) {
        func(root, 0);
        return sum;
    }
};