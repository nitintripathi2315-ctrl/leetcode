class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int sum = 0;
        int n = a.size();
        int left = 0, right = n-1;
        while(left < right){
            int sum = a[left] + a[right];
            if(sum == target){
                return {left +1 , right + 1};
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }return {};
    }
};