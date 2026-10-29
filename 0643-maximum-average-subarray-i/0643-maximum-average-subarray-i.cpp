class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        int n = a.size();
        long long sum = 0;
        for(int i=0; i<k;i++){
            sum += a[i];
        }
        long long ans = sum;
        for(int i=k; i<n; i++){
            sum += a[i] - a[i-k];
            ans = max(ans , sum);
        }return (double) ans / k;
    }
};