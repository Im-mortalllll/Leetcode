class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> neg;
        vector<int> pos;
        for (int i = 0; i < n; i++){
            if (nums[i] < 0){
                neg.push_back(nums[i]);
            }
            else {
                pos.push_back(nums[i]);
            }
        }
        int p = 0;
        for (int i = 0; i < n; i+=2){
            nums[i] = pos[p];
            nums[i + 1] = neg[p];
            p++;
        }
        return nums;
    }
};