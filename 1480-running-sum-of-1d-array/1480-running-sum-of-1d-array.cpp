class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        vector <int> ans;
        int sum=0;
        for(int i=0; i<a.size(); i++){
            sum += a[i];
            ans.push_back(sum);
        }return ans;
    }
};