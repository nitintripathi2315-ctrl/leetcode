class Solution {
public:
    int reverse(int x) {
        long long  digit = 0 , rev = 0;
        while(x!=0){
            digit = x % 10;
            rev = 1LL *  rev * 10 + digit;
            if(rev > INT_MAX || rev < INT_MIN){
                return 0;
            }
            x /= 10;
        }return rev;
    }
};