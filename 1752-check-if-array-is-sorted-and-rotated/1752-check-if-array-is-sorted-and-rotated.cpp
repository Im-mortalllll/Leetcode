class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = nums.size() - 1;
        while (l<r){
            if (l+1 < n && nums[l] <= nums[l+1]){
                l++;
            }
            if (r-1 >= 0 && nums[r] >= nums[r-1]){
                r--;
            }
            if (l + 1 < n && r - 1 >= 0 && nums[l] > nums[l + 1] && nums[r-1] > nums[r] ){
                break;
            }
        }
        if (l+1 == r){
            return nums[n-1] <= nums[0];
        }
        for (int i = l+1; i <= r; i++){
                if (nums[i-1] > nums[i]){
                    return false;
                }
        }
        return nums[r] <= nums[l];
    }
};