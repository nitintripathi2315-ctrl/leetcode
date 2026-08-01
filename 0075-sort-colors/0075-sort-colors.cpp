class Solution {
public:
    void sortColors(vector<int>& a) {
        int count0 = 0 , count1= 0, count2 = 0;
        for(int i=0; i<a.size(); i++){
            if(a[i] == 0) count0++;
            else if(a[i] == 1) {
            count1++;
            }
            else 
            count2++;
        }
        int idx=0;
        for(int i=0; i<count0; i++ ) a[idx++] = 0;
        for(int i=0; i<count1; i++ ) a[idx++] = 1;
        for(int i=0; i<count2; i++ ) a[idx++] = 2;
    }
};