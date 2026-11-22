class Solution {
public:
    bool isPalindrome(int x) {
        int ans;
        ans = x;
        long long digit = 0 , rev = 0;
        while(x!=0){
            
            digit = x % 10;
            rev = 1LL  * rev * 10 + digit;
            x/=10;
            
        }if(rev != ans || rev<0) return false;
        return true;
    }
};