class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        int l = 0 , r = n-1;
        int leftmax = 0, rightmax = 0 , water = 0;
        while(l < r){
            if(a[l] < a[r]){
                leftmax = max(leftmax , a[l]);
                water += leftmax - a[l];
                l++;
            }
            else{
                rightmax = max(rightmax, a[r]);
                water += rightmax - a[r];
                r--;
            }
        }return water;

    }
};