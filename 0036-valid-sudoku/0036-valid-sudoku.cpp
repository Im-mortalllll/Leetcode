class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9);
        vector<set<char>> col(9);
        vector<set<char>> box(9);
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.'){
                    continue;
                }
                int b = (i / 3) * 3 + (j/3);
                char num = board[i][j];
                if (row[i].count(num)){
                    return false;
                }
                if (col[j].count(num)){
                    return false;
                }
                if (box[b].count(num)){
                    return false;
                }
                row[i].insert(num);
                col[j].insert(num);
                box[b].insert(num);
            }
        }
        return true;
    }
};