class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n = a.size();
        int low =0 , high = 0, sum =0;
        int ans  = INT_MAX;
        while(high <n){
            sum = sum + a[high];
            while(sum>= target){
                int len = high - low + 1;
                ans = min(ans, len);
                sum = sum - a[low];
                low++;
            }
            high++;
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};