class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector <int> arr1 = {nums[0]};
        vector <int> arr2 = {nums[1]};
        int n = nums.size();
        for (int i = 0; i < n-2; i++){
            if (arr1.back() > arr2.back()){
                arr1.push_back(nums[i+2]);
            }
            else{
                arr2.push_back(nums[i+2]);
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};