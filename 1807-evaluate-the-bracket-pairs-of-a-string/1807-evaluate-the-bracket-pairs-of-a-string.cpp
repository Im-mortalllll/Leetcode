class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for (int i = 0; i< knowledge.size(); i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        
        int st, end;
        string bw;
        string ans = "";

        for (int i = 0; i< s.length(); i++){
            if (s[i] == '('){
                st = i;
                end = i + 1;
                while (s[end] != ')'){
                    end++;
                }
                bw = s.substr(st + 1, end - st - 1);

                if (mp.find(bw) != mp.end()){
                    ans += mp[bw];
                }
                else {
                    ans += "?";
                }
                i = end;
            }
            else {
                ans += s[i];
            }
        }
        return ans;
    }
};