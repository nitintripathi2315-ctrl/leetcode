class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        int n = a.size();
        long long maxSum = LLONG_MIN;
        long long sum = 0;
        for(int i=0; i<k; i++){
            sum += a[i];
        }
        maxSum = sum;
        for(int i=k; i<n; i++){
            sum += a[i] - a[i-k];
            maxSum = max(maxSum , sum);
        }return (double)maxSum / k;
    }
};