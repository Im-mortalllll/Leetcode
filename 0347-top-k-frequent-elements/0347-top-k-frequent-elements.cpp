class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        vector<vector<int>> as_(nums.size() + 1);
        for (pair<int, int> p : freq) {
            as_[p.second].push_back(p.first);
        }
        vector<int> ans;
        for (int i = nums.size(); i >= 1 && ans.size() < k; i--) {
            for (int num : as_[i]) {
                ans.push_back(num);
                if (ans.size() == k)
                    break;
            }
        }
        return ans;
    }
};