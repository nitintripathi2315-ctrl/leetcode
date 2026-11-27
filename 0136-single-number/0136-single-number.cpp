class Solution {
public:
    int singleNumber(vector<int>& a) {
        int ans;
        int n = a.size();
        unordered_map <int , int> f;
        for(int i = 0; i<n; i++){
            f[a[i]]++;
        }
        for(auto i : f){
            int x = i.first;
            int val = i.second;
            if(val == 1){  
                ans = i.first;
            }
        }return ans;
    }
};