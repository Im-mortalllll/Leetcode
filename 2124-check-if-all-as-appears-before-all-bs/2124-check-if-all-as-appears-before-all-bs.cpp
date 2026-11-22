class Solution {
public:
    bool checkString(string s) {
        bool b = false;
        for (char x : s){
            if (x == 'b'){
                b = true;
            }
            else if (x == 'a'){
                if (b == true){
                    return false;
                }
            }
        }
        return true;
    }
};