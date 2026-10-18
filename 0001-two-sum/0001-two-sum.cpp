class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
        unordered_map <int , int> f;
        
        for(int i=0; i<n; i++){
            int need = target - a[i];
            if(f.find(need) != f.end()){ //mila
                return {f[need] , i};
            }
            f[a[i]] = i;
        }return {};
    }
};