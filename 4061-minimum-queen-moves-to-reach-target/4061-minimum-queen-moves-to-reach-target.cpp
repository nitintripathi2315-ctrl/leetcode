class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int sr = source[0] , sc = source[1];
        int tr = target[0] , tc = target[1];

        if(sr == tr && sc == tc) return 0;

        bool samerow = (sr == tr);
        bool samecol = (sc == tc);
        bool samediagonal = (sr + tc == tr + sc) ||  (sr - tc == tr - sc);

        if(samerow || samecol || samediagonal){
            return 1;
        }
        return 2;
    }
};