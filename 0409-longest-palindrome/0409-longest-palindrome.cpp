class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char, int> f;
        for(int i=0; i<s.size(); i++){
            f[s[i]]++;
        }
        bool  odd = false;
        int ans =0;
        for(auto i : f){
            int val = i.second;
            if(val % 2 ==0){
                ans+=val;
            }
            else {
                ans+= val -1;
                odd = true;
        }
        }if(odd) return ans+1;
        return ans;
    }
};