class Solution {
public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<int> s(n + 1, 0);
        for (int i = n - 1; i >= 0; --i){
            s[i] = s[i + 1] + piles[i];
        }
        vector<vector<int>> dp(n, vector<int>(n + 1, 0));
        for (int i = n - 1; i >= 0; i--){
            for (int M = 1; M <= n; M++){
                if (2 * M >= n - i) {
                    dp[i][M] = s[i];
                    continue;
                }
                for (int x = 1; x <= 2 * M; x++) {
                    dp[i][M] = max(dp[i][M],s[i] - dp[i + x][max(M, x)]);
                }
            }
        }

        return dp[0][1];
    }
};