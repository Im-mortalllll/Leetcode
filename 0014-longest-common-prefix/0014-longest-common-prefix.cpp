class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        }
        int count = strs[0].size();
        for (int i = 0; i < strs.size(); i++){
            int cnt = 0;
            for (int j = 0; j < strs[i].size() && j < strs[0].size(); j++){
                if (strs[0][j] == strs[i][j]){
                    cnt++;
                }
                else {
                    break;
                }
            }
            count = min(count, cnt);
        }
        return strs[0].substr(0, count);
    }
};