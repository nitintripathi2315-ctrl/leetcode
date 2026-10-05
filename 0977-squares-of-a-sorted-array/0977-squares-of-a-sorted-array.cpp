class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int n = a.size();
        vector <int> ans(n);
        int i = n-1;
        int left = 0 , right = n-1;
        while(left <= right){
            if(abs(a[left]) > (abs(a[right]))){
                ans[i] = a[left] * a[left];
                left++;
            }
            else{
                ans[i] = a[right] * a[right];
                right--;
            }
            i--;
        }return ans;
    }
};