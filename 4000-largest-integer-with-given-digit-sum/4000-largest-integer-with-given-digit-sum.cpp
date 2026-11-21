class Solution {
public:
    int largestInteger(int n, int s) {
        if (s == 0){
            return 0;
        }
        if (s > n*9){
            return -1;
        }
        int sum = 0;
        int temp = 0;
        while (n--){
            int val;
            if (s - sum > 9){
                val = 9;
            }
            else {
                val = s - sum;
            }
            sum += val;
            temp = temp * 10 + val;
        }
        return temp;
    }
};