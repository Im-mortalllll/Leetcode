class Solution {
public:
    int integerReplacement(int n) {
        long long int m = n;  
        int ans = 0;
        while (m != 1){
            if ((m & 1) == 0){
                m /= 2;
            }
            else if (m == 3 || (m % 4) == 1){
                m -= 1;
            }
            else {
                m += 1;
            }
            ans++;
        }
        return ans;
    }
};