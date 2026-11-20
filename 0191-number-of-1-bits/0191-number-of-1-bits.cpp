class Solution {
public:
    int hammingWeight(int n) {
        int k = n;
        int count = 0;

        while(k){
            count += k & 1;
            k >>= 1;
        }
        return count;
    }
};