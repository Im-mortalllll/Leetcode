class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi = 0;
        int mini = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            if (nums[i] < nums[mini]){
                mini = i;
            }
            if (nums[i] > nums[maxi]){
                maxi = i;
            }
        }
        int l = min(mini, maxi);
        int r = max(mini, maxi);
        return min({(r + 1), (n - l), (l + 1 + n - r)});
    }
};