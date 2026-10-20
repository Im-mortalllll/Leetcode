class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char ,string> mp;
        unordered_map<string, char> rev;
        int index = 0;
        for (int i = 0; i < pattern.size(); i++){
            if (index >= s.size()) {
                return false;
            }
            string st = "";
            
            for (int j = index; j < s.size(); j++){
                
                if (j < s.size() && s[j] == ' '){
                    index = j+1;
                    break;
                }
                st += s[j];
                index = j+1;
            }
            if (mp.find(pattern[i]) != mp.end() && mp[pattern[i]] != st) {
                return false;
            }
            if (rev.find(st) != rev.end() && rev[st] != pattern[i]) {
                return false;
            }
            mp[pattern[i]] = st;
            rev[st] = pattern[i];
        }
        return index >= s.size();
    }
};