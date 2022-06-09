// https://unacademy.com/class/backtracking-iii-timespace-complexity-of-recursive-algorithm/OV8BAYXT

class Solution {
public:

    bool solve(vector<vector<char>>& board, int i, int j, int k , string& word) {
        
        //if not Safe
        if ( ( i < 0 || i >= board.size()) || ( j < 0 || j >= board[0].size()) ||
             ( board[i][j] == '*') || (board[i][j] != word[k]))
            return false;
        
        
        //Base case
        //PURI STRING MATCH KR GYI HAI
        if(k == word.length()-1)
            return true;
        
        char ch = board[i][j];
        
        //mark visited
        board[i][j] = '*';
        
        //traverse LRUD
        
        bool left = solve(board,i, j-1, k+1, word);
        
        bool right = solve(board,i, j+1, k+1, word);
        
        bool up = solve(board, i-1, j, k+1, word);
        
        bool down = solve(board, i+1, j, k+1, word);
        
        //back track
         board[i][j] = ch;
        
        return left || right || up || down;
        
        
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        //we will call from each cell
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                
                if(solve(board, i, j, 0, word)) {
                    return true;
                }
                
            }
        }
        return false;
    }
};