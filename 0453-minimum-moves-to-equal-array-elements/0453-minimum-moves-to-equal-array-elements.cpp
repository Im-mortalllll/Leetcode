class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int minele = nums[0];
        for (int i = 0; i < n; i++){
            minele = min(minele, nums[i]);
        }
        for (int i = 0; i < n; i++){
            ans += (nums[i] - minele);
        }
        return ans;
    }
};