class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
      int officer=0;
      int count = 1;
      int cm = 1;
      while(cm<n){
        if(n>0 && nums[cm]==nums[cm-1]) {
        cm++;}
        else {nums[officer+1] = nums[cm];
        officer++;
        cm++;
        count++;}
      }  return count;
    }
};