class Solution {
public:
    int countSpecialIntegers(vector<int>& a) {
        int n = a.size();
        unordered_map<int, vector<int>>f;
        for(int i=0; i<n; i++){
            f[a[i]].push_back(i);
        }
        int ans = 0;
        for(auto i : f){
            int key = i.first;
            vector<int> v = i.second;
            if(v.size() == 3){
                if(v[1]  - v[0] == v[2] - v[1])
                    ans++;
            }
        }return ans;
    }
};