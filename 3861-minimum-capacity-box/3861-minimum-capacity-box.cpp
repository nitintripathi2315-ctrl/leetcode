class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mindiff = INT_MAX;
       int ans =-1;
        for(int i=0 ; i<capacity.size(); i++){
            int diff = abs (capacity[i] - itemSize);
                if(capacity[i] >= itemSize && capacity[i] < mindiff){
                    mindiff = capacity[i];
                    ans = i;
                }
            
        }return ans;
    }
};