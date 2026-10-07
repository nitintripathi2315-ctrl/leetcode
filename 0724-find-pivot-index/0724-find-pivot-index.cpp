class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n = a.size();
        int sum = 0, left = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        if(sum - a[0] == 0) return 0;
        for(int i=1; i<n;  i++){
            left += a[i-1];
            int right = (sum - left - a[i]);
            if(left == right) return i;
        }
        return -1;
    }
};