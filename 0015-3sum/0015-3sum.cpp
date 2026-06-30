class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> result;
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=0; i<n-2; i++){
            if(i>0 && a[i]==a[i-1]){
                continue;
            }
            int left = i+1;
            int right = n-1;
            int sum = -a[i]; //a[i] x + y = 0 
        
        while(left < right ){
            int s = a[left]  + a[right];
            if(s==sum){
                result.push_back({a[i], a[left], a[right]});
                left++;
                right--;
            
            while(left<n && a[left]==a[left-1]){
                left++;
            }
            while(right >=0 && a[right]==a[right+1]){
                right--;
            }
            }
            else if(s<sum){
                left++;
            }
            else{
                right--;
            }
        }
        }return result;
    }
};