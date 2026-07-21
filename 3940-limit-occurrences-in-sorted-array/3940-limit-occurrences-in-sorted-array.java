class Solution {
    public int[] limitOccurrences(int[] nums, int k) {
        int ct=1;int curr=0;
        for(int i=0;i<nums.length;i++){
            if(i>0 && nums[i]==nums[i-1]){
                ct++;
            }if(i>0 && nums[i]!=nums[i-1]){
                ct=1;
            }
            if(ct<=k){
                nums[curr]=nums[i];
                curr++;
            }
        }return Arrays.copyOf(nums,curr);
    }
}