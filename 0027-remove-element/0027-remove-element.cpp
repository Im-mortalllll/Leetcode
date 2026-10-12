class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == val){
                while (i<n && nums[n] == val){
                    n--;
                }
                if (i < n){
                    swap(nums[i], nums[n--]);
                }
            }
        }
        n = nums.size() - 1;
        while (n >= 0 && nums[n] == val){
            n--;
        }
        return n + 1;
    }
};