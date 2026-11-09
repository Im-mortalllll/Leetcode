class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int j = 0;
        long long int ans =  0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] < minK || nums[i] > maxK){
                j = i + 1;
            }
            else {
                ans += (i - j + 1);
            }
        }
        return ans;
    }
};