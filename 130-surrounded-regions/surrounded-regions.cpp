
class Solution {
public:
    int n, m;

    void dfs(int i, int j, vector<vector<char>>& board) {
        if(i < 0 || j < 0 || i >= n || j >= m || board[i][j] != 'O') {
            return;
        }

        board[i][j] = 'T';

        dfs(i+1, j, board);
        dfs(i-1, j, board);
        dfs(i, j+1, board);
        dfs(i, j-1, board);
    }

    void solve(vector<vector<char>>& board) {
        n = board.size();
        m = board[0].size();

        for(int i = 0; i < n; i++) {
            dfs(i, 0, board);
            dfs(i, m-1, board);
        }

        for(int j = 0; j < m; j++) {
            dfs(0, j, board);
            dfs(n-1, j, board);
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                else if(board[i][j] == 'T') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};
