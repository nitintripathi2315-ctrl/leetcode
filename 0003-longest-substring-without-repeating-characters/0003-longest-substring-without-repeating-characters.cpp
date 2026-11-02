class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map <char , int> f;
        int low = 0, high = 0;
        int ans = INT_MIN;
        for(int high = 0; high < n; high++){
            f[s[high]]++;
        while(f.size() < (high - low + 1)){
            f[s[low]]--;
            if(f[s[low]] == 0){
                f.erase(s[low]);
            }
            low++;
        }
        ans = max(ans ,(high - low + 1));
        }if(ans == INT_MIN) return 0;
        return ans;
    }
};