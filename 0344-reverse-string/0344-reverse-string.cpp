class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int i = 0;
        while (len / 2 > i){
            swap(s[i], s[len - i - 1]);
            i++;
        }
    }
};