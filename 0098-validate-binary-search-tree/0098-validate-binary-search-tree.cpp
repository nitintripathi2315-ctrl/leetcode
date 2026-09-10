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
    vector<int> a;
    void func(TreeNode* root){
        if(root == NULL) return ;
        func(root->left);
        a.push_back(root->val);
        func(root->right);
        return;
    }
    bool isValidBST(TreeNode* root) {
        func(root);
        int n = a.size();
        for(int i=0; i<n-1; i++){
            if(a[i] >= a[i+1]) return false;
        }return true;
    }
};