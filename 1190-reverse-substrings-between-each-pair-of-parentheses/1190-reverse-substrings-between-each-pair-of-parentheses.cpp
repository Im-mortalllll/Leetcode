class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string c;
        for (int i = 0; i< s.length(); i++){
            if (s[i] == '('){
                st.push(c);
                c = "";
            }
            else if (s[i] == ')'){
                reverse(c.begin(), c.end());
                c = st.top() + c;
                st.pop();
            }
            else {
                c += s[i];
            }
        }
        return c;
    }
};