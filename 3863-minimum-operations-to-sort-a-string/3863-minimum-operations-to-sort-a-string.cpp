class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        if (is_sorted(s.begin(), s.end())) {
            return 0;
        }

        if (n <= 2) {
            return -1;
        }

        char maxi = s[0];
        char mini = s[0];

        for (int i = 1; i < n; i++) {
            if (s[i] > maxi) {
                maxi = s[i];
            }
            if (s[i] < mini) {
                mini = s[i];
            }
        }

        if (s[0] == mini || s[n - 1] == maxi) {
            return 1;
        }
        for (int i = 1; i < n-1; i++){
            if (s[i] == mini || s[i] == maxi){
                return 2;
            }
        }
        return 3;
    }
};