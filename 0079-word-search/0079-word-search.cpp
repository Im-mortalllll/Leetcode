class Solution {
private:
    bool fn(int i, int j, vector<vector<char>> &arr, string sent, string word, int idx){
        if (word == sent){
            return true;
        }

        if (i - 1 >= 0 && arr[i-1][j] == word[idx]){
            
            char temp = arr[i-1][j];
            arr[i-1][j] = '#';
            
            if (fn(i-1, j, arr, sent + temp, word, idx + 1)){
                return true;
            }
            arr[i-1][j] = temp;
        }
        if (i + 1 < arr.size() && arr[i+1][j] == word[idx]){
            
            char temp = arr[i+1][j];
            arr[i+1][j] = '#';
            
            if (fn(i+1, j, arr, sent + temp, word, idx + 1)){
                return true;
            }
            arr[i+1][j] = temp; 
        }
        if (j - 1 >= 0 && arr[i][j-1] == word[idx]){
            
            char temp = arr[i][j-1];
            arr[i][j-1] = '#';
            
            if (fn(i, j-1, arr, sent + temp, word, idx + 1)){
                return true;
            }
            arr[i][j-1] = temp;
        }
        if (j + 1 < arr[0].size() && arr[i][j+1] == word[idx]){
            
            char temp = arr[i][j+1];
            arr[i][j+1] = '#';
            if (fn(i, j+1, arr, sent + temp, word, idx + 1)){
                return true;
            }
            arr[i][j+1] = temp;
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if (board[i][j] == word[0]){
                    char temp = board[i][j];
                    board[i][j] = '#';
                    if (fn(i, j, board, string(1,temp), word, 1)) {
                        return true;
                    }
                    board[i][j] = temp;
                }
            }
        }
        return false;
    }
};