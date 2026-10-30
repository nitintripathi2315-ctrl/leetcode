class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        if(n == 0) return 0;
        sort(a.begin(), a.end());
        int ans = 1;
        int count = 1;
        for(int i=0; i<n-1; i++){
            if(a[i] == a[i+1]){
                continue;
            }
            
            if(a[i+1] == 1 + a[i] ){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(ans , count);
        }return ans;
    }
};