class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        while(l < r){
            if (vowels.count(s[l]) && vowels.count(s[r])){
                swap(s[l++], s[r--]);
            }
            else {
                if (!vowels.count(s[l])){
                    l++;
                }
                else if (!vowels.count(s[r])){
                    r--;
                }
            }

        }
        return s;
    }
};