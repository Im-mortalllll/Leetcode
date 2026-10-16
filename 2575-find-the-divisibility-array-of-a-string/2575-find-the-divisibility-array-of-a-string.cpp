class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        string s = "";
        vector<int> ans(word.size());
        long long rem = 0;
        for (int i = 0; i < word.size(); i++){
            s += word[i];
            if ((rem = (rem * 10 + (word[i] - '0')) % m) == 0){
                ans[i] = 1;
            }
            else{
                ans[i] = 0;
            }
        }
        return ans;
    }
};