#include<algorithm>
class Solution {
public:
 long long func(vector <int> &a , int n , int speed){
        long long hours = 0;
        for(int i=0; i<n; i++){
            hours += a[i] / speed;
            if(a[i] % speed != 0)
            hours++;
        }return hours;
    }

    int minEatingSpeed(vector<int>& a, int h) {
        int ans = -1;
        int n = a.size();
        int low =1;
        int high = *max_element(a.begin(), a.end());
        while(low<=high){
            int mid = low + (high - low)/2;
            long long hours = func(a , n , mid);
            if(hours > h){
                low = mid +1;
            }
            else{
                ans = mid;
                high = mid -1;
            }
        }return ans;
   
    }
};