class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int n_a1 = 0;
        int n_b1 = 0;
        int n_a2 = 0;
        int n_b2 = 0;
        int ans = 0;
        int alice_arr_month = stoi(arriveAlice.substr(0,2));
        int alice_arr_date = stoi(arriveAlice.substr(3,2));
        int alice_lev_month = stoi(leaveAlice.substr(0,2));
        int alice_lev_date = stoi(leaveAlice.substr(3,2));
        int bob_arr_month = stoi(arriveBob.substr(0,2));
        int bob_arr_date = stoi(arriveBob.substr(3,2));
        int bob_lev_month = stoi(leaveBob.substr(0,2));
        int bob_lev_date = stoi(leaveBob.substr(3,2));

        for (int i = 1; i < alice_arr_month; i++){
            n_a1 += days[i-1];
        }
        n_a1 += alice_arr_date;

        for (int i = 0; i < alice_lev_month - 1; i++){
            n_a2 += days[i];
        }
        n_a2 += alice_lev_date;


        for (int i = 0; i < bob_arr_month - 1; i++){
            n_b1 += days[i];
        }
        n_b1 += bob_arr_date;

        for (int i = 0; i < bob_lev_month - 1; i++){
            n_b2 += days[i];
        }
        n_b2 += bob_lev_date;

        if (n_a1 <= n_b2 && n_b1 <= n_a2) {
            ans = min(n_a2, n_b2) - max(n_a1, n_b1) + 1;
        }

        return ans;
    }
};