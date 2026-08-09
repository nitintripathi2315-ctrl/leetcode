class Solution {
public:
    int search(vector<int>& a, int target) {
        int idx;;
        int n = a.size();
        int low = 0 , high = n-1;
        while(low<=high){
            int mid = low  + (high - low)/2;
            if(a[mid] > a[n-1]){
                low = mid +1;
            }
            else{
                idx = mid;
                high = mid -1;
            }
        }
        int low1= 0, high1 = idx-1;
        while(low1<=high1){
            int mid = low1 + (high1 - low1)/2;
            if(a[mid] == target){
                return mid;
            }
            else if(a[mid] < target){
                low1 = mid +1;
            }
            else{
                high1 = mid -1;
            }
        }
        int low2= idx ,high2 = n-1;
        while(low2<=high2){
            int mid = low2 + (high2 - low2)/2;
            if(a[mid] == target){
                return mid;
            }
            else if(a[mid] < target){
                low2 = mid +1;
            }
            else{
                high2 = mid -1;
            }
        }return -1;
    }
};