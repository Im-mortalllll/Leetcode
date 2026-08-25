class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans=k;
        sort(nums.begin(), nums.end());
        for (int x : nums){
            if (x == ans){
                ans+=k;
            }
        }
        return ans;
    }
};