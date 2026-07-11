class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int maxEnding = a[0];
        int maxSoFar = a[0];
        int minEnding = a[0];
        int minSoFar = a[0];
        int ans=0;
        for(int i=1; i<a.size(); i++){
            maxEnding = max(a[i], maxEnding + a[i]);
            maxSoFar = max(maxSoFar, maxEnding);
            minEnding = min(a[i], minEnding+a[i]);
            minSoFar = min(minSoFar, minEnding);
        }return max(maxSoFar, abs(minSoFar));
    }
};