class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long int maxp=nums[n-1];
        long long int maxpp=nums[n-2];
        long long int minn=nums[0];
        long long int minnn=nums[1];
        long long int ans = LLONG_MIN;
        ans = max(ans,
                  max(maxp * maxpp * 100000LL,
                      max(minn * minnn * 100000LL,
                          minn * maxp * (-100000LL))));
        return ans;
    }
};