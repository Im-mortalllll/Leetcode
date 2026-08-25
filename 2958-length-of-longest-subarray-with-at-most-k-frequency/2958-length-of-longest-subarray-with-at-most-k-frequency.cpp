class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map <int, int> freq; 
        int st = 0;
        int end = 0;
        int ans = 0;
        for (; end < nums.size(); end++){
            freq[nums[end]]++;
            while (freq[nums[end]] > k){
                freq[nums[st]]--;
                st++;
            }
            ans = max(ans, end - st + 1);
        }
        return ans;
    }
};