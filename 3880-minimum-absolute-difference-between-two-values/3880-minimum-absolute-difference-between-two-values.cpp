class Solution {
public:
    int minAbsoluteDifference(vector<int>& a) {
        int lastOne = -1;
        int lastTwo = -1;
        int ans = INT_MAX;
        for(int i =0; i<a.size(); i++){
            if(a[i] == 1){
                lastOne = i;
                if(lastTwo != -1){
                    ans = min(ans , abs(lastOne - lastTwo));
                }
            }
            if(a[i] == 2){
                lastTwo = i;
                if(lastOne != -1){
                    ans = min(ans, abs(lastOne - lastTwo));
                }
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};