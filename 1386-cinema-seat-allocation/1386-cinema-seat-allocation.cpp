class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> reserved;
        vector<int> rows;
        int ans = 0;
        for (int i = 0; i < reservedSeats.size(); i++) {
            int row = reservedSeats[i][0];
            int seat = reservedSeats[i][1];
            if (reserved.find(row) == reserved.end()) {
                rows.push_back(row);
            }
            reserved[row].insert(seat);
        }
        for (int i = 0; i < rows.size(); i++) {
            int row = rows[i];
            bool left = true;
            bool middle = true;
            bool right = true;
            for (int i = 2; i <= 5; i++) {
                if (reserved[row].count(i)) {
                    left = false;
                }
            }
            for (int i = 4; i <= 7; i++) {
                if (reserved[row].count(i)) {
                    middle = false;
                }
            }
            for (int i = 6; i <= 9; i++) {
                if (reserved[row].count(i)) {
                    right = false;
                }
            }
            if (left && right) {
                ans += 2;
            }
            else if (left || middle || right) {
                ans += 1;
            }
        }
        ans += (n - rows.size()) * 2;
        return ans;
    }
};
