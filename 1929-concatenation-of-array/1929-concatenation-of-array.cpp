class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.reserve(nums.size() + nums.size());
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};