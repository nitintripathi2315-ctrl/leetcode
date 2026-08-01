class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(), a.end());
        int n =a.size();
        vector<vector<int>> ans;
        for(int i=0; i<n-2; i++){
            if(i>0 && a[i] == a[i-1]){
                continue;
            }
            int left = i+1; 
            int right = n-1;
            int sum = -a[i];
        
        while(left < right){
            int s = a[left] + a[right];
            if(s==sum){
                ans.push_back({a[i] , a[left] , a[right]});
            
            left++;
            right--;
            
            while(left<n && a[left] == a[left-1]){
                left++;
            }
            while(right >=0 && a[right] == a[right+1])
            {
                right--;
            }
        }
            else if(s<sum)
            {
                left++;
            }
            else right--;
        }
        }return ans;
    }
};