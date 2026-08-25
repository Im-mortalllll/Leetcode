class Solution {
public:
    bool checkDivisibility(int n) {
        int k = n;
        int sum = 0;
        int prod = 1;
        while(k){
            int rem = k % 10;
            sum += rem;
            prod *= rem;
            k/=10;
        }
        if ((n % (sum + prod)) == 0){
            return true;
        }
        return false;
    }
};