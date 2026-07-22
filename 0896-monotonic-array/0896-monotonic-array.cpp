class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int inc = true;
        int dec = true;
        for(int i=1; i<a.size(); i++){
            if(a[i] > a[i-1])
            dec = false;
            if(a[i] < a[i-1])
            inc = false;
        }return inc || dec;
    }
};