class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(')
                left++;
            else
                right++;

            if (left == right){
                ans = max(ans, 2 * right);
            }
            else if (right > left )
                left = right = 0;
        }
        left  = 0; 
        right = 0;
        for (int i = s.length(); i >= 0; i--){
            if (s[i] == ')')
                right++;
            else
                left++;

            if (left == right){
                ans = max(ans, 2 * right);
            }
            else if (right < left )
                left = right = 0;
        }
        return ans;
    }
};