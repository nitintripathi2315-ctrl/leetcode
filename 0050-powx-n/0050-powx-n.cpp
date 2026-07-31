class Solution {
public:
    double myPow(double x, int n) {
        long binarynum = n;
        if(n<0){
            x = 1/x;
            binarynum = -binarynum;
        }
        double  ans=1;
        while(binarynum > 0){
            if(binarynum % 2 == 1){
               ans *= x;
            }
            x*=x;
            binarynum /=2;
        }return ans;
    }
};