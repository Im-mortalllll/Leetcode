class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                nums[i]=1;
            }
            else{
                nums[i]=0;
            }
        }
        int even=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                even++;
            }
        }
        int odd=nums.size()-even;
        fill(nums.begin(), nums.end(), 1); 
        for(int i=0;i<even;i++){
            nums[i]=0;
        }
        return nums;
    }
};