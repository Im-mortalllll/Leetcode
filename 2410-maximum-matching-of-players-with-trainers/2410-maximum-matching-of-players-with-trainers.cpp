class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int n = trainers.size();
        int j = 0;
        int ans = 0;
        for (int i = 0; i < players.size(); i++){
            while(j < n){
                if (players[i] <= trainers[j]){
                    ans++;
                    j++;
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};