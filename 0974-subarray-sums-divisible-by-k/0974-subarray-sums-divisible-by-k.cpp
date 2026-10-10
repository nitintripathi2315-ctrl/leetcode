class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int n = a.size();
        int ans = 0;
        unordered_map <int , int> f;
        f[0] = 1;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
            int rem = sum % k;
            if(rem <0){
                rem =  rem + k;
            }
            ans += f[rem];
            f[rem]++;
        }return ans;
    }
};