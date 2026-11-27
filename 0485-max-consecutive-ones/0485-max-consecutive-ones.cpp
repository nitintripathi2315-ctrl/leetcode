class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n = a.size();
        int ans = INT_MIN;
        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 1){
                count++;
            }
            else{
                count = 0 ;
            }
            ans = max(ans , count);
        }return ans;
    }
};