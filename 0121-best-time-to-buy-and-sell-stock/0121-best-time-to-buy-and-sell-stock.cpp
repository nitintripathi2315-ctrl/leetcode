class Solution {
public:
    int maxProfit(vector<int>& a) {
        int maxP = 0;
        int bestbuy = a[0];
        for(int i=1; i<a.size(); i++){
            if(a[i] > bestbuy){
                maxP = max(maxP , a[i]-bestbuy);
            }
            bestbuy = min(bestbuy , a[i]);
        }return maxP;
    }
};