class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        sort(s.begin(), s.end());
        int start = n - 1;
        for (int i = 0; i < n; i++) {
            int pos = -1;
            for (int j = i; j < n; j++) {
                if (s[j] == target[i]) {
                    pos = j;
                    break;
                }
            }
            if (pos == -1) {
                start = i;
                break;
            }
            swap(s[i], s[pos]);
        }
        for (int i = start; i >= 0; i--) {
            sort(s.begin() + i, s.end());

            int pos = -1;

            for (int j = i; j < n; j++) {
                if (s[j] > target[i]) {
                    pos = j;
                    break;
                }
            }
            if (pos != -1) {
                swap(s[i], s[pos]);
                sort(s.begin() + i + 1, s.end());
                return s;
            }
        }
        return "";
    }
};