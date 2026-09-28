class Solution {
public:
    int maxDepth(string s) {
        int b = 0;
        int ans = 0;
        for (char c : s){
            if (c =='('){
                b++;
                ans = max(ans, b);
            }
            else if (c ==')'){
                b--;
            }
        }
        return ans;
    }
};