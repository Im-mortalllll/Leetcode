class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int mid1, mid2;
        int cnt1 = 0, cnt2 = 0;
        int cnt = 0;
        if (n % 2 == 0){
            mid1 = nums[n/2];
            mid2 = nums[n/2 - 1];
            for (int i = 0; i < n; i++){
                if (nums[i] < mid1 || nums[i] > mid1){
                    cnt1 += abs(mid1 - nums[i]);
                }
            }
            for (int i = 0; i < n; i++){
                if (nums[i] < mid2 || nums[i] > mid2){
                    cnt2 += abs(mid2 - nums[i]);
                }
            }
            cnt = min(cnt1, cnt2);
        }
        else {
            mid1 = nums[n/2];
            for (int i = 0; i < n; i++){
                if (nums[i] < mid1 || nums[i] > mid1){
                    cnt += abs(mid1 - nums[i]);
                }
            }
        }
        return cnt;
    }
};