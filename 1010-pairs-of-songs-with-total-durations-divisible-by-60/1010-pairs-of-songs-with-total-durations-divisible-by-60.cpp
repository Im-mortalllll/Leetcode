class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> v(60,0);
        for (int i = 0; i < time.size(); i++){
            v[time[i]%60]++;
        }
        long long int cnt = 0;
        cnt += 1LL * v[0] * (v[0] - 1) / 2 + 1LL * v[30] * (v[30] - 1) / 2;
        for (int i = 1; i < 30; i++){
            cnt += 1LL * v[i]*v[60-i];
        }
        return cnt;

    }
};