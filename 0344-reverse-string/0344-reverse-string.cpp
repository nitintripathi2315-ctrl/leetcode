class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        stack <char> st;
        vector <char> ans;
        for(int i=0; i<n; i++){
            st.push(s[i]);
        }
        while(!st.empty()){
            char c = st.top();
            st.pop();
            ans.push_back(c);
        }s = ans;
    }
};