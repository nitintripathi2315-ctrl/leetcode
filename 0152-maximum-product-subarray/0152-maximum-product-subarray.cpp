class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n = a.size();
        int MaxProd = INT_MIN;
        for(int i=0; i<n; i++){
            int ans = 1;
            for(int j=i; j<n; j++){
                ans *= a[j];
                MaxProd = max(ans , MaxProd);
            }
            
        }return MaxProd;
    }
};