class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mineve = INT_MAX;
        int minodd = INT_MAX;
        for (int x : nums1){
            if (x & 1){
                minodd = min(minodd, x);
            }
            else {
                mineve = min(mineve, x);
            }
        }
        if (mineve == INT_MAX || minodd == INT_MAX){
            return true;
        }
        if (mineve < minodd){
            return false;
        }
        return true;
    }
};