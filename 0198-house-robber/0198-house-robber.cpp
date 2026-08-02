class Solution {
public:
    int rob(vector<int>& nums) {
        int f=0;
        int s=0;
        for (int x : nums){
            int cur=max(f,s+x);
            s=f;
            f=cur;
        }
        return f;
    }
};