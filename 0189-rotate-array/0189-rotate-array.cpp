class Solution {
public:
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        k = k % n; // brings the array back to its original form
        int i = 0 , j=n-1;
        while(i<j){
            swap(a[i] , a[j]);
            i++;
            j--;
        }
        i=0; j = k-1;
        while(i<j){
            swap(a[i] , a[j]);
            i++;
            j--;
        }
        i = k , j = n-1;
        while(i<j){
            swap(a[i] , a[j]);
            i++;
            j--;
        }
    }

};