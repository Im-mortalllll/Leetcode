class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> cnt;
        for (int i = 0; i < n; i++){
            if (cnt.find(nums[i]) != cnt.end()){
                cnt[nums[i]]++;
                continue;
            }
            cnt.insert({nums[i], 1});
        }
        vector<int> arr;
        for (int i =0; i < n; i++){
            if(cnt[nums[i]] > n/3){
                arr.push_back(nums[i]);
                cnt[nums[i]] = 0;
            }
        }
        return arr;
    }
};