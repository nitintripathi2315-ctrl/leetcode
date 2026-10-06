class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        int ans = 0;
        int lp = 0 , rp = n-1;
        while(lp < rp){
            int width = rp - lp;
            int ht = min(a[lp] , a[rp]);
            int currwater = ht * width;
            ans = max (ans , currwater);
            if(a[lp] < a[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }return ans;
    }
};