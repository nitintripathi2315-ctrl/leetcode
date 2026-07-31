class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int cm =1;
        int officer=0;
        int count =1;
        while(cm <a.size()){
            if(a[cm-1] == a[cm]){
                cm++;
            }
            else{
                a[officer+1]= a[cm];
                officer++;
                cm++;
                count++;
            }
        }return count;
    }
};