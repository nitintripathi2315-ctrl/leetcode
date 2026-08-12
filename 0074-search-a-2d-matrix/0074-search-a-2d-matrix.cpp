class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int n = a.size(); // row
        int m = a[0].size(); // column
        int low =0 , high = n*m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int row = mid / m;
            int column = mid % m;
            if(a[row][column] == target){
                return true;
            }
            else if(a[row][column] < target){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }return false;
    }
};