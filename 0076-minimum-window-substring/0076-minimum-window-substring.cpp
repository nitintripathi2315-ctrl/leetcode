class Solution {
public:
    bool func(vector <int> &have, vector <int> & need){
        for(int i=0; i<256; i++){
            if(have[i] < need[i]){
                return false;
            }
        }return true;
    }
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector <int> have(256,0);
        vector <int> need(256,0);
        int i;
        if(n<m) return "";
        for(int i = 0; i<m; i++)
            need[t[i]]++; //pta kr lo chaiye kya
        int low=0, high=0, res = INT_MAX;
        int start = -1; //to store best at idx = 0
        for(high=0; high<n; high++){
            have[s[high]]++;
            while(func(have, need)){
                int len = high - low +1;
                if(res>len){
                    res = len;
                    start = low; //to store best at idx=0
                }
                have[s[low]]--;
                low++;
            } 
        }if(res==INT_MAX) return "";
        return s.substr(start, res);
    }
};