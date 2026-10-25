class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0; i < words.size(); i++){
            int j = 0;
            bool b = true;
            while(j < words[i].size()/2){
                if (words[i][j] != words[i][words[i].size()-j-1]){
                    b = false;
                    break;
                }
                j++;
            }
            if (b == true){
                return words[i];
            }
        }
        return "";
    }
};