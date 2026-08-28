class Solution {
public:
    unordered_map <char ,string> f = {
    {'2' , "abc"},
    {'3' , "def"},
    {'4' , "ghi"},
    {'5' , "jkl"},
    {'6' , "mno"},
    {'7' , "pqrs"},
    {'8' , "tuv"},
    {'9' , "wxyz"}
    };
    void func(string &s , int n ,int idx, string & temp, vector <string> &ans){
        if(idx == n){
            ans.push_back(temp);
            return;
        }
        string choice = f[s[idx]];
        for(int i=0; i<choice.size(); i++){
            temp.push_back(choice[i]);
            func(s , n , idx + 1, temp ,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string s) {
        int n = s.size();
        vector <string> ans;
        string temp = "";
        func(s , n, 0, temp, ans);
        return ans;
    }
};