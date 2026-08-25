class Solution {
public:
    bool sumGame(string num) {
        int p1 =0 , p2 = 0, sum1 = 0, sum2 = 0;
        int n = num.size();
        for (int i = 0 ; i < num.size() ; i++){
            if (num[i] == '?'){
                if (i < n/2){
                    p1++;
                }
                else {
                    p2++;
                }
            }
            else {
                if (i < n/2){
                    sum1+=num[i] - '0';
                }
                else{
                    sum2+=num[i] - '0';
                };
            }
        }
        if ((p1 + p2) % 2 != 0){
            return true; 
        }
        if (sum2 + 9 * p2 / 2 == sum1 + 9 * p1 / 2){
            return false;
        }
        return true;
    } 
};