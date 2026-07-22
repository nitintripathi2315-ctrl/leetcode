class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        sort(a.begin(), a.end());
        vector<vector<int>> ans;
        int n =a.size();
        int x = INT_MAX;
        for(int i=0; i<n-1; i++){
            x = min(x, (a[i+1] - a[i]));
        }
       for(int i=0; i<n-1; i++){
        if(a[i+1] - a[i] == x){
        ans.push_back({a[i], a[i+1]});
        }
       }
        return ans;
    }
};