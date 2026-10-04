class Solution {
public:
    long long rev = 0;
    int digit;
    bool isPalindrome(int x) {
        if(x <0) return false;
        int ans = x;
        while(x!=0){
        digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
        }
        if(rev == ans) 
        {
            return true;}
            else 
        return false;
    }
};