class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long int> result(k,0);
        vector<long long int> prev_cnt(k,0);
        for (int i = 0; i< nums.size(); i++){
            vector<long long int> curr_cnt(k,0);
            curr_cnt[nums[i]%k]++;
            for (int old = 0; old < k; old++){
                int neww = ((long long)old * nums[i] % k) % k;
                curr_cnt[neww] += prev_cnt[old];
            }
            prev_cnt = move(curr_cnt);
            for (int x =0; x <= k-1; x++){
                result[x] += prev_cnt[x];
            }
        }
        return result;
    }
};