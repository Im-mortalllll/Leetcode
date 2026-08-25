class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xor_ = 0;
        int nz = 0;
        for (int num : nums){
            xor_ ^= num;
            if (num != 0){
                nz++;
            }
        }
        if (xor_ != 0){
            return nums.size();
        }
        else if (nz > 0){
            return nums.size() - 1;
        }
        return 0;
    }
};