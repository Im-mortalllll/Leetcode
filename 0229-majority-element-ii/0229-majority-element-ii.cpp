class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i =0; i < n; i++){
            if (cnt1 == 0 && ele2 != nums[i]){
                ele1 = nums[i];
                cnt1++;
            }
            else if (cnt2 == 0 && ele1 != nums[i]){
                ele2 = nums[i];
                cnt2++;
            }
            else if (ele1 == nums[i]){
                cnt1++;
            }
            else if (ele2 == nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> ans;
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++){
            if (ele1 == nums[i]){
                cnt1++;
            }
            else if (ele2 == nums[i]){
                cnt2++;
            }
        }
        if (cnt1 > n/3){
            ans.push_back(ele1);
        }
        if (cnt2 > n/3){
            ans.push_back(ele2);
        }
        return ans;
    }
};