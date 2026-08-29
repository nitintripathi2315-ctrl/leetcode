class Solution {
public:
    void func(vector <int> &a , int n ,int sum ,int idx, vector <int> &diary , vector<vector<int>> &ans , int target){
        if(idx == n){
            if(sum == target){
                ans.push_back(diary);
            }return;
        }
        // 1st option le lenge
        func(a, n ,sum, idx+1,diary, ans, target);
        if(a[idx] + sum <= target){
            diary.push_back(a[idx]);
            sum += a[idx];
        func(a, n,sum, idx, diary, ans, target);
        diary.pop_back();
        sum -= a[idx];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        int n = a.size();
        vector<vector<int>> ans;
        vector <int> diary;
        int sum = 0;
        func(a, n,sum, 0,diary,ans,target);
        return ans;
    }
};