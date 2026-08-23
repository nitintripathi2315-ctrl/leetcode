class Solution {
public:
    struct cmp{
        bool operator()(pair <int , string> &a, pair <int, string> &b){
            if(a.first == b.first)
                return a.second < b.second; //larger word on top
                return a.first > b.first; // smaller frequency on top
        }
    };
    vector<string> topKFrequent(vector<string>& a, int k) {
        priority_queue<pair<int, string>, vector<pair<int, string>>, cmp>pq;
        int n = a.size();
        unordered_map <string, int> f;
        for(int i=0; i<n; i++){
            f[a[i]]++;
        }
        for(auto x : f){
            pq.push({x.second, x.first});
        
        if(pq.size()>k){
            pq.pop();
        }
        }
        vector <string> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};