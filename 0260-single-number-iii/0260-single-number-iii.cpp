class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int x = 0;
        for (int i =0; i < nums.size(); i++){
            x ^= nums[i];
        }
        long long int d = x & -x;
        int a = 0;
        int b = 0;
        for (int y : nums){
            if (d & y){
                a ^= y;
            }
            else {
                b ^= y;
            }
        }
        return {a,b};
    }
};