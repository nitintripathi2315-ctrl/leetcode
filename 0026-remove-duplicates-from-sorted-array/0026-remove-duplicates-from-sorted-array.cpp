class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int officer = 0;
        int cm = 1;
        int count = 1;
        while(cm <n){
            if(a[cm-1] == a[cm]){
                cm++;
            }
            else{
                a[officer + 1] = a[cm];
                cm++;
                officer++;
                count++;
            }
        }return count;
    }
};