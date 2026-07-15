class Solution {
public:
    bool checkRecord(string s) {
        int  absent =0, streak =0, maxstreak=0;
        for(int i=0 ; i<s.size(); i++){
            if(s[i] == 'A') absent++;
            if(s[i] ==  'L'){
                streak++;
                maxstreak = max(maxstreak , streak);
            }
                else{
                    streak = 0;
                    }
        }return (absent < 2 && maxstreak < 3);
    }
};