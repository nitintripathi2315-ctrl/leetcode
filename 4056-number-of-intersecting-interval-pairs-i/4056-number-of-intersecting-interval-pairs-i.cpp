class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(max(a[i][0] , a[j][0]) <= min(a[i][1] , a[j][1])){
                    ans++;
                }
            }
        }return ans;
    }
};