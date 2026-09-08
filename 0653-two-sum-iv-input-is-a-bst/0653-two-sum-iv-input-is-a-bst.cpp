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
        if(root == NULL){
            return;
        }
        func(root->left );
        a.push_back(root->val);
        func(root->right);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        func(root);
        int n = a.size();
        int left  = 0, right = n-1;
        while(left < right){
            if(a[left] + a[right] == k){
                return true;
            }
            else if(a[left] + a[right] < k){
                left++;
            }
            else{
                right--;
            }
        }return false;
    }
};