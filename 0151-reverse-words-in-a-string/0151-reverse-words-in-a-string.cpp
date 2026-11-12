class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string st = "";
        for (int i = s.size() - 1; i >= 0; i--){
            if (s[i] == ' ' && !st.empty()){
                reverse(st.begin(), st.end());
                ans += st;
                ans += " ";
                st = "";
            }
            else if (s[i] == ' '){
                continue;
            }
            else{
                st += s[i];
            }
        }
        reverse(st.begin(), st.end());
        ans += st;
        if (ans[ans.size()-1] == ' '){
            ans.pop_back();
        }
        return ans;
    }
};