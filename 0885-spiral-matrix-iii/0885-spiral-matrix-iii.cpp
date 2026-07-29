class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int R_st, int C_st) {
        vector<vector<int>> ans;
        ans.push_back({R_st, C_st});
        int step=1;
        while (ans.size() < rows*cols) {

            for (int i=0; i<step; i++) {
                C_st++;
                if (R_st>=0 && R_st<rows &&
                    C_st>=0 && C_st<cols)
                    ans.push_back({R_st, C_st});
            }

            for (int i=0; i<step; i++) {
                R_st++;
                if (R_st>=0 && R_st<rows &&
                    C_st>=0 && C_st<cols)
                    ans.push_back({R_st, C_st});
            }

            step++;

            for (int i=0; i<step; i++) {
                C_st--;
                if (R_st>=0 && R_st<rows &&
                    C_st>=0 && C_st<cols)
                    ans.push_back({R_st, C_st});
            }

            for (int i=0; i<step; i++) {
                R_st--;
                if (R_st>=0 && R_st<rows &&
                    C_st>=0 && C_st<cols)
                    ans.push_back({R_st, C_st});
            }
            step++;
        }
        return ans;
    }
};