class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> f;
        int res = INT_MIN;
        int low=0, high=0;
        for(int high=0; high<n; high++){
            f[s[high]]++;
            //int len = high - low +1; // len = size of  current window
            while(f.size()<high - low + 1){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);}
                    low++;}
                 //len = high - low +1;
                
                //int len = high - low +1; //now equal 
                res = max(res, (high - low + 1));
        }if(res==INT_MIN) return 0;
        return res;
    }
};