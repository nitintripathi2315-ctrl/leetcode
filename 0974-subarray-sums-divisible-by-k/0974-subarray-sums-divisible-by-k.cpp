class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int n = a.size();
        unordered_map <int, int> f;
        f[0] = 1;
        int ans = 0 , rem =0 , sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
            rem = sum % k;
            if(rem< 0){
                rem += k;
            }
            ans += f[rem];
            f[rem]++;
        }return ans;
    }
};