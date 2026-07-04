class Solution {
public:
    int totalFruit(vector<int>& a) {
        int n = a.size();
        int res = INT_MIN;
        int high=0, low=0;
        unordered_map<int,int> f;
        for(int high =0; high<n; high++){
            f[a[high]]++;
            while(f.size()>2){
                f[a[low]]--;
                if(f[a[low]]==0){
                    f.erase(a[low]);}
                    low++;
                }
                if(f.size()<=2){
                    int len = high - low + 1;
                    res = max (res, len);
                }
                //if(res == INT_MIN) return -1;
            
        }return res;
        }
};