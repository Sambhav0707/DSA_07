class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<int,set<int>>rows;
        unordered_map<int,set<int>>cols;
        map<pair<int,int> , set<int>>sq;

        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j<9 ; j++){
                if(board[i][j] == '.') continue;
                if(rows[i].count(board[i][j]) || cols[j].count(board[i][j]) || sq[{i/3, j/3}].count(board[i][j])) return false;
               rows[i].insert(board[i][j]);
               cols[j].insert(board[i][j]);
               sq[{i/3,j/3}].insert(board[i][j]);

            }
        }

        return true;

        
    }
};