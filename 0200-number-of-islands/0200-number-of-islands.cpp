class Solution {
public:
    int x[4] = {-1, 1 , 0 , 0};
    int y[4] = {0, 0 , -1 , 1};
    bool valid (int i , int j , int m , int n){
        if(i<0 || i>=n || j<0 || j>=m ){
            return false;
        }
        return true;
    }
    void dfs(vector<vector<char>> &a , int i,int j,int m, int n,vector<vector<bool>> &vis){
        vis[i][j] = 1;
        for(int k=0; k<4; k++){
            int row = i + x[k];
            int col = j + y[k];
            if(valid(row , col , m , n) && a[row][col] == '1' && vis[row][col] == 0){
                dfs(a , row , col, m , n, vis);
            }
        }return;
    }
    int numIslands(vector<vector<char>>& a) {
        int n = a.size();
        int m = a[0].size();
        int ans = 0;
        int i,j;
        vector<vector<bool >> vis(n);
        for(int i=0; i<n; i++){
            vector <bool> t(m, 0);
            vis[i] = t;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j] == '1' && vis[i][j] == 0){
                    dfs(a ,i , j , m , n, vis);
                    ans++;
                }
            }
        }return ans;
    }
};