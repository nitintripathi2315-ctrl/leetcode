class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int n = a.size();
        vector <int> ans(n);
        ans[n-1] = 0;
        stack <int> st;
        st.push(n-1);
        for(int i=n-2; i>=0; i--){
            while(!st.empty() && a[st.top()] <= a[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = 0;
            }
            else{
                ans[i] = st.top() - i;
            }st.push(i);
        }return ans;
    }
};