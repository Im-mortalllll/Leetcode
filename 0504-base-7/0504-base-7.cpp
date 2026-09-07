class Solution {
public:
    string convertToBase7(int num) {
        string ans;
        bool k = true;
        if (num == 0){
            return "0";
        }
        if (num < 0){
            k = false;
            num = -num;
        }
        while (num > 0){
            ans += char('0' + num % 7);
            num /= 7;
        }
        if (k == false){
            ans += '-';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};