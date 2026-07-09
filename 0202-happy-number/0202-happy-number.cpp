class Solution {
public:
    int func(int n){
        int sum =0;
        while(n>0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }return sum;
    }
    bool isHappy(int n) {
        int slow=n , fast=n;
        while(fast!=1){
            slow = func(slow);
            fast = func(fast);
            fast = func(fast);
            if(slow==fast && fast != 1){
                return false;
            }
        }return true;
    }
};