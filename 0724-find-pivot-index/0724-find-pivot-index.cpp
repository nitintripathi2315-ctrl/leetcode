class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int sum=0;
        int left = 0;
        for(int i=0; i<a.size(); i++){
            sum += a[i];
        }
        if (sum - a[0] == 0) return 0;
        for(int i = 1; i<a.size(); i++){
            left += a[i-1];
            int right = (sum -left - a[i]);
            if(left==right){
                return i;
                
            }
        }return -1;
    }
};