class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum = INT_MAX;;
        for (int i = 0; i < nums.size(); i++){
            int curr = 0;
            for (int size = i; size < nums.size() && size <= i + r; size++){
                curr += nums[size];
                if (size - i + 1 >= l && size - i + 1 <= r && curr > 0){
                    sum = min(sum, curr);
                }
            }
        }
        return sum == INT_MAX ? -1 : sum;
    }
};