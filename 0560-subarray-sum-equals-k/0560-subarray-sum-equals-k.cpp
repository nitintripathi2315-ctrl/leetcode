class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int, int > f;
        f[0] = 1;
        int ans = 0 ,sum =0;
        for(int i=0; i<a.size(); i++){
            sum += a[i];
            int ques = sum - k;
            int freq = f[ques];
            ans += freq;
            f[sum]++;
        }return ans;
    }
};