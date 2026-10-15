class Solution {
public:
    int findMaxLength(vector<int>& a) {
        int n = a.size();
        unordered_map <int, int> f;
        int zero = 0 , one = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 0) {zero++;
            }
            else
            one++;
            int diff = zero - one;
            if(diff==0){
                ans = max(ans , i+1);
                continue;
            }
        if(f.find(diff) == f.end()){
            f[diff] = i;
        }
        else{
            int idx = f[diff];
            int len = i - idx;
            ans = max(ans , len);
        }
        }return ans;
    }
};