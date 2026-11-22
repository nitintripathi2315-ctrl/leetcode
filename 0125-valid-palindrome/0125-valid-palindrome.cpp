class Solution {
public:
    bool isPalindrome(string a) {
        int n = a.size();
        int left = 0, right = n-1;
        while(left<right){
            while(left < right && !isalnum(a[left])){
                left++;
            }
            while(left < right && !isalnum(a[right])){
                right--;
            }
            if(tolower(a[left]) != tolower(a[right])){
                return false;
            }
            left++;
            right--;
        }return true;
    }
};