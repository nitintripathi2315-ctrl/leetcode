class Solution {
public:
    int maximumSum(vector<int>& a) {
        int noDelete = a[0];
        int oneDelete = INT_MIN;
        int ans = a[0];
        for(int i=1; i<a.size(); i++){
            int prevNoDelete = noDelete;
            noDelete = max(a[i], a[i] + noDelete);
            if(oneDelete != INT_MIN){
            oneDelete = max(prevNoDelete , a[i] + oneDelete);
            }
            else 
            oneDelete = prevNoDelete;
            ans = max(ans, max(oneDelete,noDelete));
        }return ans;
    }
};