class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a.size();
        int ans = -1;
        int low =0 ,high = n-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(a[mid] > a[n-1]){
                low  = mid +1;
            } 
            else{
                ans = mid;
                high = mid - 1;
            }
        }return a[ans];
    }
};