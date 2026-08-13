class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int n = a.size();
        priority_queue <int , vector <int> , greater <int>> pq; // ,min heap
        int i;
        for(i=0; i<k; i++){
            pq.push(a[i]);
        }
        for(i=k; i<n; i++){
            if(a[i] < pq.top()){
                continue;
            }
            pq.pop();
            pq.push(a[i]);
        }return pq.top();
    }
};