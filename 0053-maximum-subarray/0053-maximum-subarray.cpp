class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int bestEndingHere = a[0];
        int bestSoFar = a[0];
        for(int i=1; i<a.size(); i++){
            bestEndingHere = max(a[i],bestEndingHere + a[i]);
            bestSoFar = max(bestSoFar,bestEndingHere);
        }return bestSoFar;
    }
};