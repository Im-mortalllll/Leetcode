class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        long long int sum = 0;
        int ans =0;
        sort(nums.begin(), nums.end());
        while(r < n){
            sum += nums[r];
            while ((long long int) nums[r] * (r - l + 1) - sum > k){
                sum-= nums[l];
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};