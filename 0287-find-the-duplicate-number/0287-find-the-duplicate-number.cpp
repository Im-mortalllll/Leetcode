class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = 0;
        int f = 0;
        while ( true){
            s = nums[s];
            f = nums[nums[f]];
            if (s == f){
                break;
            }
        }
        int st = 0;
        while (true){
            s = nums[s];
            st = nums[st];
            if (s == st){
                break;
            }
        }
        return s;
    }
};