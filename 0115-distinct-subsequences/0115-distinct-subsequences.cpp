class Solution {
public:
    int numDistinct(string s, string t) {
        int n = t.size();
        vector <unsigned long long> dp(n + 1, 0);
        dp[0] = 1;
        for (char c : s){
            for (int i = n; i > 0; i--){
                if (c == t[i - 1]){
                    dp[i] += dp[i - 1];
                }
            }
        }
        return (int)dp[n];
    }
};