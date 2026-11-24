class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int cm = 1 , officer = 0 , count = 1;
        while(cm < n)
        {
            if(a[cm] == a[cm-1]){
                cm++;
            
            }
            else {
                (a[officer+1] = a[cm]);
                cm++;
                officer++;
                count++;
            }
        }return count;
    }
};