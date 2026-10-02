class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i , j = 0;
        while(i != a.size()){
            if(a[i] != 0){
                swap(a[i], a[j]);
                j++;
            }i++;
        }
    }
};