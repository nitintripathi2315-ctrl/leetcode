class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n = a.size();
        vector <int> ans(n);
        stack <int> st;
        for(int i = n-2; i>=0; i--){
            st.push(a[i]);
        }
        for(int i= n-1; i>=0; i--){
            while(!st.empty() && st.top() <= a[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = st.top();
            }st.push(a[i]);
        }return ans;
    }
};