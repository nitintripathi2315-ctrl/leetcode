class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int sum = a[0];
        int maxEnding = a[0];
        int maxSoFar = a[0];
        int minEnding = a[0];
        int minSoFar = a[0];
        for(int i=1; i<a.size(); i++){
            sum = sum + a[i];
            maxEnding = max(a[i], maxEnding + a[i]);
            maxSoFar = max(maxSoFar , maxEnding);
            
            minEnding = min(a[i], minEnding + a[i]);
            minSoFar = min(minSoFar , minEnding);
        }
        if(maxSoFar<0){
                return maxSoFar;
            }return max(maxSoFar , sum - minSoFar);
    }
};