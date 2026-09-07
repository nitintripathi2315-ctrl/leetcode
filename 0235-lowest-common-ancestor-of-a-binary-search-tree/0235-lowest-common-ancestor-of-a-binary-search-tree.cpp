/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans = NULL;
    void func(TreeNode* root , TreeNode* p , TreeNode* q){
        if(root==NULL) return;
        if(p->val==root->val || q->val == root->val){
            ans = root;
            return;
        }
        if(root->val > q->val){
            func(root->left, p , q);
        }
        else if(root->val < p->val){
            func(root->right , p , q);
        }
        else{
            ans = root;
            return;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val < q->val){
        func(root, p , q);
        }
        else{
             func(root, q , p);
        }
        return ans;
    }
};