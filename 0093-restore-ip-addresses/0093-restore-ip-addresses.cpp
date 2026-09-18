class Solution {
public:
    vector<string> ans;
    void solve(string &s, int pos, int count, string ip) {
        if (count == 4) {
            if (pos == s.size()) {
                ip.pop_back();
                ans.push_back(ip);
            }
            return;
        }

        for (int len = 1; len <= 3; len++) {
            if (pos + len > s.size())
                break;

            string x = s.substr(pos, len);
            int num = stoi(x);

            if (num > 255)
                break;

            if (x[0] == '0' && len > 1)
                break;

            solve(s, pos + len, count + 1, ip + x + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        if (s.size() == 4){
            return {s.substr(0, 1) + "." + s.substr(1, 1) + "." + s.substr(2, 1) + "." + s.substr(3, 1)};
        }
        solve(s, 0, 0, "");
        return ans;
    }
};