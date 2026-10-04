class Solution {
public:
    int countSpecialIntegers(vector<int>& a) {
        int n = a.size();
        unordered_map<int , vector<int>>f;
        for(int i = 0; i<n; i++){
            f[a[i]].push_back(i);
        }
        int ans = 0;
        for(auto &p : f){
            int key =  p.first;
            vector<int> &v = p.second;
            if(v.size() < 3) continue;
            bool ok = true;

            for(int j=1; j<(int)v.size()-1; j++){
                if(v[j] - v[j-1] != v[j+1] - v[j]){
                ok = false;
                break;
                }
            }if(ok) ans++;
        }return ans;
    }
};