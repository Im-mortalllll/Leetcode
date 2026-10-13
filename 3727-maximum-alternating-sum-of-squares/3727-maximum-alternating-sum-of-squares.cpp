class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int i = 0 ; i < nums.size(); i++){
            if (nums[i] < 0){
                nums[i] = ((-1)*nums[i]);
            }
        }
        sort(nums.begin(), nums.end());
        long long sum1 = 0;
        long long sum2 = 0;
        for (int i = 0; i < nums.size(); i++){
            if (i < nums.size() / 2){
                sum1 += 1LL * nums[i] * nums[i];
            }
            else{
                sum2 += 1LL * nums[i] * nums[i];
            }
        }
        return sum2 - sum1;
    }
};