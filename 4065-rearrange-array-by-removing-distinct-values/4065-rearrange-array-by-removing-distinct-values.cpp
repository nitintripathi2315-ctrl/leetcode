class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> freq(101, 0);
        
        // Count frequency of every number
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        
        vector<int> ans;
        
        // Keep doing rounds until all occurrences are removed
        while(ans.size() < nums.size()){
            
            // In each round, take one of every available number
            for(int i = 1; i <= 100; i++){
                if(freq[i] > 0){
                    ans.push_back(i);
                    freq[i]--;
                }
            }
        }
        
        return ans;
    }
};