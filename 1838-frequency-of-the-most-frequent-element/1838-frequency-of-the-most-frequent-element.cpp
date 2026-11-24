class Solution {
public:
    int maxFrequency(vector<int>& a, int k) {
        sort(a.begin() , a.end());
        int n = a.size();
        long long left = 0;
        long long ans = 1;
        long long sum = 0;
        for(int right = 0; right < n; right++){
            sum += a[right];
            long long cost = 1LL * a[right] * (right -left + 1) - sum;

        while(cost> k){
            sum = sum -  a[left];
            left++;
            cost = a[right] * (right -left + 1) - sum;
        }
        ans = max(ans , (long long )(right - left + 1));
        }return ans;
    }
};