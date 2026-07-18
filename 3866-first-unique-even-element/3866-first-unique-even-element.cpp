class Solution {
public:
    int firstUniqueEven(vector<int>& a) {
        unordered_map <int, int> f;
        for(int i=0; i<a.size(); i++){
            if(a[i] % 2 == 0){
            f[a[i]]++;
            }
        }
        for(int i=0; i<a.size(); i++){
            if(a[i] % 2 == 0 && f[a[i]] == 1){
                return a[i];
            }
        }return -1;
    }
};