class Solution {
public:
    bool checkValidString(string s) {
        int left = 0, right = 0;
        int a = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '('){
                left++;
                right++;
            }
            else if (s[i] == ')'){
                left--;
                right--;
            }
            else {
                left--;
                right++;
            }
            left = max(left, 0);
            if (right < 0)
                return false;
        }
        return (left == 0) ? true : false;        
    }
};