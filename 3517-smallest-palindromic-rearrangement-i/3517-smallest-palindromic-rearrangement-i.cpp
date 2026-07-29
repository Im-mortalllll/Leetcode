class Solution {
public:
    string smallestPalindrome(string s) {
        int freq[26]={0};
        for (char c : s){
            freq[c-'a']++;
        }
        string str= "";
        for (int i=0;i<26; i++){
            str.append(freq[i]/2, char(i+'a'));
        }
        char middle='\0';
        for (int i=0; i<26; i++) {
            if (freq[i]%2) {
                middle=char(i+'a');
                break;
            }
        }
        string str1=str;
        reverse(str1.begin(), str1.end());
        if(s.size()%2==0){
            return str+str1;
        }
        return str+middle+str1;
    }
};