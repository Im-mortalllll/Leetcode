class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector <int> flat;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                flat.push_back(grid[i][j]);
            }
        }
        for (int i = 0; i < m * n; i++){
            if (((flat[i] - flat[0]) % x) != 0){
                return -1;
            }
        }
        sort(flat.begin(), flat.end());
        int med = flat[m * n / 2];
        int ans = 0;
        for (int i = 0; i < m * n; i++){
            if (med > flat[i]){
                while (flat[i] != med){
                    flat[i] += x;
                    ans++;
                }
            }
            else {
                while (flat[i] != med){
                    flat[i] -= x;
                    ans++;
                }
            }
        }
        return ans;
    }
};