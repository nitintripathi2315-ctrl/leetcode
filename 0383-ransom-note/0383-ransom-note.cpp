class Solution {
public:
        bool check(unordered_map <char, int> &have, unordered_map <char , int> &need){
            for(auto i : need){
                char c = i.first;
                int fneed = i.second;
                int fhave = have[c];
            
            if(fhave < fneed) return false;
        }return true;
        }
    bool canConstruct(string a, string b) {
        unordered_map <char ,int> have;
        unordered_map <char, int> need;
        for(int i=0; i<a.size(); i++){
            need[a[i]]++;
        }
        for(int i=0; i<b.size(); i++){
            have[b[i]]++;
        }
        return check(have , need);
    }
};