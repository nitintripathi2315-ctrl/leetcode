class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        string ans = "";
        int count = 0;
        for(int i=s.size()-1; i>=0; i--){
            ans += s[i];
            count++;
            if(count == 3 && i != 0){
                ans += '.';
                count = 0;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};