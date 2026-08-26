class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans = nums1;
        ans.insert(ans.end(), nums2.begin(), nums2.end());
        sort(ans.begin(), ans.end());
        if (ans.size() % 2 == 1){
            return ans[ans.size() / 2];
        }
        else {
            return (ans[ans.size() / 2] + ans[ans.size() / 2 - 1]) / 2.0;
        }
    }
};