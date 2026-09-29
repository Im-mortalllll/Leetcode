class Solution {
public:
    string reverseWords(string s) {
    string ans = "";
    string word = "";
    for (char ch : s) {
        if (ch == ' ') {
            reverse(word.begin(), word.end());
            ans += word + " ";
            word = "";
        } else {
            word += ch;
        }
    }
    reverse(word.begin(), word.end());
    ans += word;
    return ans;      
    }
};