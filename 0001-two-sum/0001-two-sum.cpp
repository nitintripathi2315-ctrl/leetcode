class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
        unordered_map <int , int >f;
        int need;
        for(int i=0; i<n; i++){
            need = target - a[i];
            if(f.find(need) != f.end()){
                return {f[need], i};
            }
            f[a[i]] = i;
        }return {};
    }
};