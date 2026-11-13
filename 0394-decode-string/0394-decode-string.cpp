class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;
        string ans = "";
        string val = "";
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                val += s[i];
            }
            else if (s[i] == '[') {
                nums.push(stoi(val));
                strs.push(ans);
                val = "";
                ans = "";
            }
            else if (s[i] == ']') {
                int k = nums.top();
                nums.pop();

                string temp = strs.top();
                strs.pop();

                while (k--) {
                    temp += ans;
                }
                ans = temp;
            }
            else {
                ans += s[i];
            }
        }
        return ans;
    }
};