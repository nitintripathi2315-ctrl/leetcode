class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        int n = a.size();
        unordered_map<string , vector<string>> f;
        for(int i=0; i<n; i++){
            string x = a[i];
            sort(x.begin(), x.end());
            f[x].push_back(a[i]);
        }
        vector<vector<string>> ans;
        for(auto &i:f){
            ans.push_back(i.second);
        }return ans;
    }
};