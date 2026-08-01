class Solution {
private:
    int recur(vector<int> &v, int l, int r, vector<vector<int>> &re){
        if (l==r){
            return v[l];
        }
        if(re[l][r]!=INT_MIN){
            return re[l][r];
        }
        int left=v[l]-recur(v,1+l,r,re);
        int right= v[r]-recur(v,l,r-1,re);
        return re[l][r]=max(left,right);
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> re(n, vector<int> (n,INT_MIN));
        if(recur(nums,0,n-1,re)>=0){
            return true;
        }
        return false;
    }
};