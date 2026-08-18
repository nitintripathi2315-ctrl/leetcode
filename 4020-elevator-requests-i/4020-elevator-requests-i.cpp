class Solution {
public:
    int elevatorRequests(int n, vector<int>& b) {
        int ans =0;
        int curr = 0;
        for(int i=0; i<b.size(); i++){
            ans += abs(b[i] - curr);
            curr = b[i];
        }return ans;
    }
};