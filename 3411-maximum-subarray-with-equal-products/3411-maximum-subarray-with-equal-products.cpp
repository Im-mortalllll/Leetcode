class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int max_len = -1;
        for (int i = 0; i < n; i++){
            __int128 prod = 1;
            __int128 gcd = nums[i];
            __int128 lcm = nums[i];
            for (int j = i; j < n; j++){
                __int128 a1 = gcd;
                __int128 a2 = lcm;
                __int128 b1 = nums[j];
                __int128 b2 = nums[j];
                prod *= nums[j];
                if (prod > 10e5){
                    break;
                }
                while (b1 != 0 || b2 != 0){
                    if (b1 != 0){
                        __int128 temp = b1;
                        b1 = a1%b1;
                        a1 = temp;
                    }
                    if (b2 != 0){
                        __int128 temp = b2;
                        b2 = a2%b2;
                        a2 = temp;
                    }
                }
                gcd = a1;
                lcm = lcm/a2*nums[j];
                if (prod == gcd * lcm){
                    max_len = max(max_len, j - i + 1);
                }
                
            }
        }
        return max_len;
    }
};