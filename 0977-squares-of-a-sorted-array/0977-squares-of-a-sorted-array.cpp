class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector <int> neg;
        vector <int> pos;
        for(int i=0; i<a.size(); i++){
            if(a[i]<0){
                neg.push_back(a[i]);
            }
            else{
                pos.push_back(a[i]);
            }
        }
            if(neg.size()==0){
                for(int i=0; i<pos.size(); i++){
                    pos[i] *= pos[i];
                }
                return pos;
            }
            if(pos.size()==0){
                for(int i=0; i<neg.size(); i++){
                    neg[i] *= neg[i];
                }
                reverse(neg.begin(), neg.end());
                return neg;
            }
            int i=0, j=0, idx=0;
            int n =neg.size();
            int m = pos.size();
            vector <int> result(n+m);
            for(int i=0; i<n; i++){
                neg[i] *= neg[i];
            }reverse(neg.begin(), neg.end());
            for(int i=0; i<m ;i++){
                pos[i] *= pos[i];
            }
            while(i< n && j< m){
                if(neg[i] <= pos[j]){
                    result[idx] = neg[i];
                    i++;
                    idx++;
                }
                else{
                    result[idx] = pos[j];
                    j++;
                    idx++;
                }
            }
            while(i<n){
                result[idx] = neg[i];
                idx++;
                i++;
            }
            while(j<m){
                result[idx] = pos[j];
                idx++;
                j++;
            }return result;
    }
};