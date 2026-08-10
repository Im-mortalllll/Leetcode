class Solution {
public:
    int possibleStringCount(string word) {
        vector<int> freq;

        int cnt = 1;

        for (int i = 1; i < word.size(); i++) {
            if (word[i] == word[i - 1]) {
                cnt++;
            } else {
                freq.push_back(cnt);
                cnt = 1;
            }
        }

        freq.push_back(cnt);

        int ans = 1;

        for (int x : freq) {
            if (x > 1) {
                ans += x - 1;
            }
        }

        return ans;
    }
};