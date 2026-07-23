class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& a) {
        int n =a.size();
        vector <int> ans(n);
        for(int i=0; i<a.size(); i++){
            int count = 0;
            for(int j=0; j<a.size(); j++){
                if(a[j]< a[i]){
                    count++;
                }
            }
            ans[i] = count;
        }return ans;
    }
};