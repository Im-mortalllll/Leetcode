class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for (int i =0 ; i < nums.size(); i++){
            int sum = 0;
            int k = nums[i];
            while(k>0){
                sum += k % 10;
                k /= 10;
            }
            if (sum == i){
                return i;
            }
        }
        return -1;
    }
};