class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n_row = grid.size();
        int n_col = grid[0].size();
        vector<int> row(n_row, 0);
        vector<int> column(n_col, 0);
        for (int i = 0; i < n_row; i++){
            for (int j = 0; j < n_col; j++){
                if (grid[i][j] == 1){
                    row[i]++;
                    column[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n_row; i++){
            for (int j = 0; j < n_col; j++){
                if (grid[i][j] == 1 && (row[i] > 1 || column[j] > 1)){
                    ans++;
                }
            }
        }
        return ans;
    }
};