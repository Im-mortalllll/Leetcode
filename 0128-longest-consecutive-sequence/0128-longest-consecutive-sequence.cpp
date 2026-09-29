class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 1;
        int c = 1;
        for (int i = 1; i< nums.size(); i++){
            if (nums[i] == nums[i - 1] + 1){
                c++;
                ans = max(ans, c);
            }
            else if (nums[i] != nums[i - 1]){
                c = 1;
            }
        }
        return nums.size() != 0 ?  ans : 0;
    }
};