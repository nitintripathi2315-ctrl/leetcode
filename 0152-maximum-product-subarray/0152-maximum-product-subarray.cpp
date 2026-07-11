class Solution {
public:
    int maxProduct(vector<int>& a) {
        int maxEnding = a[0];
        int minEnding = a[0];
        int ans = a[0];
        for(int i=1; i<a.size(); i++){
            int v1 = a[i];
            int v2 = a[i] * maxEnding;
            int v3 = a[i] * minEnding;
        
        maxEnding = max(v1, max(v2, v3));
        minEnding = min(v1 , min(v2,v3));
        ans = max(ans, max(maxEnding, minEnding));}
        return ans;
    }
};