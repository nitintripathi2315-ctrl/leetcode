class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int count = 0;
        for(int i=0; i<a.size(); i++){
            int sum = 0;
            for(int j= i; j<a.size(); j++){
                sum += a[j];
                if(sum==k) count++;
            }
        }return count;
    }
};