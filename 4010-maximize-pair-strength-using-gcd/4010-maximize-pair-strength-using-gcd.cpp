class Solution {
public:
    long long maxPairStrength(vector<int>& a) {
        int n = a.size();
        long long ans =0 ;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                long long g =  gcd(a[i] , a[j]);
                long long strength =   1LL * a[i] * a[j] / ( g * g);
            
            ans = max(ans , strength);
            }
        }return ans;
    }
};