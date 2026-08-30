class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for ( int i = 0; i < n - 1; i++){
            string nxt = "";
            for (int j = 0; j < s.size(); ){
                int k = j;
                while (k < s.size() && s[k] == s[j]){
                    k++;
                }
                nxt += to_string(k - j);
                nxt += s[j];
                j = k;
            }
            s = nxt;
        }
        return s;
    }
};