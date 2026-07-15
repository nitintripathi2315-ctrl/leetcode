class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int count = 0;
        int maxi = 0;
        for(int i=0; i<a.size(); i++){
            if(a[i] == 1){
                count++;
            }
            else{
                count = 0;
                maxi = max(maxi , count);
            } maxi = max(maxi , count);
        }return maxi;
    }
};