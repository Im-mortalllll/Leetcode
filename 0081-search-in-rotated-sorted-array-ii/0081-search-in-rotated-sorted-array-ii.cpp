class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() -1;
        int mid;
        while(l < r){
            mid = l + (r - l)/2;
            if (nums[mid] == nums[r]) {
                if (nums[r - 1] > nums[r]) {
                    l = r;
                    break;
                }
                r--;
            }
            else if (nums[mid] > nums[r]){
                l = mid + 1;
            }
            else {
                r = mid;
            }
        }

        int p = l;
        int k = l - 1;
        l = 0;
        r = nums.size() - 1;
        int ans_1, ans_2;
        while (l <= k){
            mid = l + (k-l)/2;
            if (nums[mid] == target){
                return true;
            }
            else if (nums[mid] > target){
                k = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        k = p;
        while (k <= r){
            mid = k + (r-k)/2;
            if (nums[mid] == target){
                return true;
            }
            else if (nums[mid] > target){
                r = mid - 1;
            }
            else {
                k = mid + 1;
            }
        }
        return false;
    }
};