class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n = a.size();
        int result  = INT_MAX;
        int low=0;
        int high=0;
        int sum=0;
        while(high<n){
            sum = sum + a[high];
        while(sum>=target){
            int len = high - low + 1;
            result = min(result, len);
            sum = sum - a[low];
            low++;
        }high++;
        } return (result == INT_MAX) ? 0 : result;
    }
};