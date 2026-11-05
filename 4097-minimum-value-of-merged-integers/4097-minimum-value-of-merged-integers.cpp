class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        long long int ans = LLONG_MAX;
        for (int i = 0; i < nums.size() - 1; i+=2) {
            string s = to_string(nums[i]) + to_string(nums[i + 1]);
            ans = min(ans, (long long int)stoi(s));
        }
        return ans;

    }
};