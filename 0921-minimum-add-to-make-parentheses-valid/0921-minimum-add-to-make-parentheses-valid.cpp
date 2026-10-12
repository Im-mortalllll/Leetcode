class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                int j = i + 1;
                while (j < n && s[j] != ')') {
                    j++;
                }
                if (j < n) {
                    s[j]= '*';
                }
                else {
                    ans++; 
                }
            }
            else if (s[i] == ')') {
                ans++;          
            }
        }
        return ans;
    }
};