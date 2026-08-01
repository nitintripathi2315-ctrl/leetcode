class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        sort(a.begin(), a.end());
        int n = a.size();
        int ans = 0;
        int diff = INT_MAX;
        for(int i=0; i<n-2; i++){
            if(i>0 && a[i] == a[i-1]){
                continue;
            }
            int left = i+1;
            int right = n-1;
            int sum=0;
            while(left <right){
                sum =  a[left] + a[right] + a[i];
                int d = abs(target - sum);
                if(diff> d){
                    diff = d;
                    ans = sum;
                }
                if(ans == target){
                    return ans;
                }
                if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }return ans;
    }
};