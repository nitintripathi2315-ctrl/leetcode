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
    vector<vector<int>> ans;
    void func(TreeNode* root, int targetSum,int sum, vector <int> diary){
        if(root == NULL) return;
        sum += root->val;
        diary.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                ans.push_back(diary);
                //diary.pop_back();
            }return;
        }func(root->left , targetSum,sum, diary);
        func(root->right , targetSum,sum, diary);
        //diary.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> diary;
        func(root , targetSum,0, diary);
        return ans;
    }
};