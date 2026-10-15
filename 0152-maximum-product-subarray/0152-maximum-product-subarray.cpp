class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pf = 1;
        int sf = 1;
        int maxi = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            pf *= nums[i];
            sf *= nums[n-i-1];
            maxi = max(maxi, max(sf, pf));
            if (nums[i] == 0){
                pf = 1;
            }
            if (nums[n - i - 1] == 0){
                sf = 1;
            }
        }
        return maxi;
    }
};