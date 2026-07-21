class Solution {
public:
    vector<int> limitOccurrences(vector<int>& a, int k) {
        vector <int> ans;
        int count = 1;
        ans.push_back(a[0]);
        for(int i =1; i<a.size(); i++){
            if(a[i] == a[i-1]){
                count++;
            }
            else count = 1;
            if(count <= k){
                ans.push_back(a[i]);
            }
        }return ans;
    }
};