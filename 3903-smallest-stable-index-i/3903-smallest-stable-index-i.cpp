class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;
        int p = -1;
        for (int i = 0; i < n; i++){
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for (int j = 0; j < n; j++){
                if (j >= i){
                    mini = min(mini, nums[j]);
                }
                else {
                    maxi = max(maxi, nums[j]);
                }
            }
            maxi = max(maxi, nums[i]);
            if (maxi - mini <= k){
                ans = min(ans, maxi -mini);
                if (p == -1){
                    p = i;
                    break;
                }
            }
        }
        return (ans == INT_MAX) ? -1 : p;
    }
};