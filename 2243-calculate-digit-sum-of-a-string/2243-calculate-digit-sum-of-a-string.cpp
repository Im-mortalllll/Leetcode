class Solution {
public:
    string digitSum(string s, int k) {
        int i = 0;
        string ans = "";
        while (k < s.size()){
            for (int j = 0; j < s.size(); j+=k){
                int val = 0;
                for (int p = j; p < min(j + k, (int)s.size()); p++) {
                    val += s[p] - '0';
                }
                ans += to_string(val);
            }
            s = ans;
            ans = "";
        }
        return s;
    }
};