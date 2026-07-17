class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& a) {
        unordered_set <int> f;
        for(int i=0; i<a.size(); i++){
            int x = a[i];
            if(f.count(x)){
                f.erase(x);
            }
            else f.insert(x);
        } vector <int> ans(f.begin(), f.end());
        sort(ans.begin() , ans.end());
        return ans;
    }
};