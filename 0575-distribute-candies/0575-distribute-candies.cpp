class Solution {
public:
    int distributeCandies(vector<int>& a) {
        unordered_map<int, int> f;
        for(int i =0; i<a.size(); i++){
            int x = f[a[i]];
            f[a[i]]++;
        }
        int unique = f.size();
        int cantake= a.size() /2;
        return min(unique , cantake);
    }
};