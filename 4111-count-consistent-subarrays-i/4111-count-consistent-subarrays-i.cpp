class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int minim = nums[i];
            int andd = nums[i];
            for (int j = i; j < n; j++) {
                minim = min(minim, nums[j]);
                andd = andd & nums[j];
                if (andd == minim) {
                    count++;
                }
            }
        }
        return count;
    }
};