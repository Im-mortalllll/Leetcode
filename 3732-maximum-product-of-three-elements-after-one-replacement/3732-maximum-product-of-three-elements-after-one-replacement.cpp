class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long mx1 = LLONG_MIN; 
        long long mx2 = LLONG_MIN;
        long long mn1 = LLONG_MAX;
        long long mn2 = LLONG_MAX;
        for (int x : nums) {
            if (x>=mx1) {
                mx2=mx1;
                mx1=x;
            } 
            else if (x>mx2) {
                mx2=x;
            }

            if (x<=mn1) {
                mn2=mn1;
                mn1=x;
            } 
            else if (x<mn2) {
                mn2=x;
            }
        }
        long long X=100000LL;
        return max(X*mx1*mx2,max(X*mn1*mn2,-X*mn1*mx1));
    }
};