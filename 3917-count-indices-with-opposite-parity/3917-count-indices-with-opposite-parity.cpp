class Solution {
public:
    vector<int> countOppositeParity(vector<int>& a) {
        int n = a.size();
        int even=0 , odd =0;
        vector <int> ans(n);
        for(int i=n-1; i>=0; i--){
            if(a[i] % 2 == 0){
                ans[i]=odd;
                even++;
            }else{
                ans[i]=even;
                odd++;
            }
        }return ans;
    }
};