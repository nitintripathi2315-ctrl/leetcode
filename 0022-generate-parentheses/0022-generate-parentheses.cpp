class Solution {
public:
    void solve(int open,int close,string& temp,int n,vector <string> &ans) {
        if(open == n && close == n){
            ans.push_back(temp);
            return ;
        }
        // case 1 
        if(open < n){
            temp.push_back('(');
            solve(open +1 , close , temp , n , ans);
            temp.pop_back();
        }
        if(close < open){
            temp.push_back(')');
            solve(open , close +1 , temp , n , ans);
            temp.pop_back();
        }
    }
         vector<string> generateParenthesis(int n ){
            vector <string> ans;
            string temp;
            solve(0 , 0, temp , n, ans);
         return ans;
    }
};