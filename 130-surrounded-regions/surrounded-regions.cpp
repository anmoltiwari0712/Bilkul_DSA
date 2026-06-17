class Solution {
public:

    void dfs(int row,
             int col,
             vector<vector<char>>& board){

        int totalRows = board.size();
        int totalCols = board[0].size();

        // Mark this cell as safe
        board[row][col] = '#';

        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};

        // Explore 4 directions
        for(int i=0;i<4;i++){

            int newRow = row + delRow[i];
            int newCol = col + delCol[i];

            if(newRow >= 0 &&
               newRow < totalRows &&
               newCol >= 0 &&
               newCol < totalCols &&
               board[newRow][newCol] == 'O'){

                dfs(newRow,newCol,board);
            }
        }
    }

    void solve(vector<vector<char>>& board) {

        int totalRows = board.size();
        int totalCols = board[0].size();

        // Traverse top row
        for(int col=0;col<totalCols;col++){

            if(board[0][col] == 'O'){

                dfs(0,col,board);
            }
        }

        // Traverse bottom row
        for(int col=0;col<totalCols;col++){

            if(board[totalRows-1][col] == 'O'){

                dfs(totalRows-1,col,board);
            }
        }

        // Traverse left column
        for(int row=0;row<totalRows;row++){

            if(board[row][0] == 'O'){

                dfs(row,0,board);
            }
        }

        // Traverse right column
        for(int row=0;row<totalRows;row++){

            if(board[row][totalCols-1] == 'O'){

                dfs(row,totalCols-1,board);
            }
        }

        // Final traversal
        for(int row=0;row<totalRows;row++){

            for(int col=0;col<totalCols;col++){

                // Surrounded region
                if(board[row][col] == 'O'){

                    board[row][col] = 'X';
                }

                // Safe region
                else if(board[row][col] == '#'){

                    board[row][col] = 'O';
                }
            }
        }
    }
};