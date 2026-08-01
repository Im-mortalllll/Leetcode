class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=nums[0]+nums[1]+nums[2];
        int mini=abs(sum-target);
        sort(nums.begin(),nums.end());
        for(int a=0;a<nums.size()-2;a++){
            int b=nums.size()-1;
            int c=a+1;
            while(c<b){
                int curr=nums[a]+nums[b]+nums[c];
                int v1=abs(curr-target);
                mini=min(mini,v1);
                if(mini==v1){
                    sum=curr;
                }
                if(curr<target){
                    c++;
                }
                else if(curr>target){
                    b--;
                }
                else{
                    return curr;
                }
            }
        }
        return sum;
    }
};