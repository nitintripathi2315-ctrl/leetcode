class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size();
        sort(a.begin(), a.end());
        int x;
        if(a[0] !=0 ) return 0;
        
        for(int i=0; i<n-1; i++){
            if(a[i+1] - a[i] != 1){
                x = a[i] +1;
                return x;
            }
        }
        return n;
    }
};