class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long int> v;
        for (int i =0 ; i< nums.size(); i++){
            if (nums[i] < 0){
                v.push_back((-1)*nums[i]);
            }
            else{
                v.push_back(nums[i]);
            }
        }
        sort(v.begin(), v.end());
        long long sum1 = 0;
        long long sum2 = 0;
        for (int i = 0; i < nums.size(); i++){
            if (i < nums.size() / 2){
                sum1 += (v[i] * v[i]);
            }
            else{
                sum2 += (v[i] * v[i]);
            }
        }
        return sum2 - sum1;
    }
};