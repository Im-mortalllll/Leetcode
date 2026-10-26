class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        for (int i = 0; i < n*n; i++){
            int k = i / n;
            int j = i % n;
            if (k == j || k + j == n - 1){
                if (grid[k][j] == 0){
                    return false;
                }

            }
            else if (grid[k][j] != 0){
                return false;
            }
        }
        return true;
    }
};