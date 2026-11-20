class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        int sum = 0;
        vector<int> v;
        if (n >= 2 && s >= 2) {
            v.push_back(2);
            sum += 2;
        }
        for (int i = 3; i <= n; i+=2){
            bool _isPrime = true;
            for (int j = 3; j * j <= i; j++) {
                if (i % j == 0) {
                    _isPrime = false;
                    break;
                }
            }
            if (_isPrime){
                if ( sum + i > s){
                    break;
                }
                v.push_back(i);
                sum += i;
            }
        }

        return v;
    }
};