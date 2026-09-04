class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> s_count(10,0);
        vector<int> g_count(10,0);
        int n_bulls = 0;
        int n_cows = 0;
        for (int i = 0; i < secret.size(); i++){
            if (secret[i] == guess[i]){
                n_bulls++;
            }
            else {
                s_count[secret[i] - '0']++;
                g_count[guess[i] - '0']++;
            }
        }
        for (int i = 0; i < 10; i++){
            n_cows += min(s_count[i], g_count[i]);
        }
        return to_string(n_bulls) + "A" + to_string(n_cows) + "B";
    }
};