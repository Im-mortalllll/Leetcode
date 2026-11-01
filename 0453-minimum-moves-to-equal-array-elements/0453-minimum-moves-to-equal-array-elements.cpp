class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minele = INT_MAX;
        int sum = 0;

        for (int x : nums) {
            minele = min(minele, x);
            sum += x;
        }

        return sum - minele * nums.size();
    }
};