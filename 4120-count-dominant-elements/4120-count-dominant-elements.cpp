class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int cnt = 0;
        if (nums.size() == 1){
            return 1;
        }
        for (int i = 0; i < nums.size(); i++){
            if (i == 0){
                if (nums[i] >= nums[i+1]){
                    cnt++;
                }
            }
            else if (i == nums.size()-1){
                if (nums[i] >= nums[i-1]){
                    cnt++;
                }
            }
            else {
                if (nums[i] >= ((double)nums[i-1] + (double)nums[i+1])/2.0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};