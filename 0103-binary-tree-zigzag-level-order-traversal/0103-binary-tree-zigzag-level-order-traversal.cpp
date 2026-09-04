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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        bool leftToRight = true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int lvlSize = q.size();
            vector<int> temp(lvlSize);
            int first = 0, last = lvlSize-1;
            while(lvlSize--){
                TreeNode * t = q.front();
                q.pop();
            if(leftToRight){
                temp[first] = t->val;
                first++;
            }
            else{
                temp[last] = t->val;
                last--;
            }
            if(t->left != NULL)
                q.push(t->left);
            if(t->right != NULL)
                q.push(t->right);
            }ans.push_back(temp);
            leftToRight = !leftToRight;
        }return ans;
    }
};