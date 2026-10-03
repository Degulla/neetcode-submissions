class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9);
        vector<unordered_set<char>>col(9);
        vector<unordered_set<char>>boxes(9);
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char ch=board[i][j];
                int box=(i/3)*3+(j/3);
                if(board[i][j]=='.'){
                    continue;
                }
                if(row[i].count(ch) || col[j].count(ch) || boxes[box].count(ch)){
                    return false;
                }
                row[i].insert(ch);
                col[j].insert(ch);
                boxes[box].insert(ch);
            }
        }
        return true;
        
    }
};
