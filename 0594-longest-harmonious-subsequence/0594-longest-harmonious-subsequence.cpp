class Solution {
public:
    int findLHS(vector<int>& a) {
        unordered_map <int, int> f;
        for(int i =0; i<a.size(); i++){
            int x = a[i];
            f[a[i]]++;
        }
        int ans = 0;
        for(auto  it : f){
        if(f.count(it.first + 1)){
            ans = max (ans , it.second + f[it.first+1]);
        }
        }return ans;
    }
};