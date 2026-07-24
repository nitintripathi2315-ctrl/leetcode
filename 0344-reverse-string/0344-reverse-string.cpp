class Solution {
public:
    void reverseString(vector<char>& s) {
        stack <char> st;
        vector <char> ans;
        int n = s.size();
        for(int i=0; i<n; i++){
            st.push(s[i]);
        }
        while(!st.empty()){
            char c = st.top();
                st.pop();
            ans.push_back(c);
        }s=ans;
    }
};