class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        int n =s.size();
        string  ans = "";
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(st.top() == s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }reverse(ans.begin(), ans.end());
        return ans;
    }
};