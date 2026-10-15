class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        if (sum > 9 * num){
            return ans;
        }
        int n_o_9 = sum/9;
        int left = sum % 9;
        ans += string (n_o_9, '9');
        bool tr = false;
        if (left > 0){
            ans += to_string(left);
            tr = true;
        }
        ans += string(num -(n_o_9 + (tr ? 1 : 0)), '0');
        return ans;
    }
};