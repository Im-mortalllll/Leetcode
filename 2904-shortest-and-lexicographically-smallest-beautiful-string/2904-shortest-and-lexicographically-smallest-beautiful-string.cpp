class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0;
        int n_one = 0;
        string ans = "";
        for (int r = 0; r < n; r++){
            if(s[r] == '1'){
                n_one++;
            }
            while (n_one > k){
                if(s[l] == '1'){
                    n_one--;
                }
                l++;
            }
            if (n_one == k){
                while (l <= r && s[l] == '0'){
                    l++;
                }
                string st = s.substr(l, r - l + 1);
                if (ans.empty() || 
                    st.size() < ans.size() || 
                    (st.size() == ans.size() && st < ans)){
                    ans = st;
                }               
            }
        }
        return ans;
    }
};