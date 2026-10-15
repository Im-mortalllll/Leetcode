class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size(), ans = 0;

        for (int l = 0; l < n; l++) {
            bool seen[101] = {};
            int cnt = 0;

            for (int r = l; r < n; r++) {
                int x = nums[r];
                cnt += !seen[x];
                seen[x] = true;
                ans += cnt * cnt;
            }
        }
        return ans;
    }
};  