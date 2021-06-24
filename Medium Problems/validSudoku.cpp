class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        unordered_map<char,int>row[9];
        unordered_map<char,int>column[9];
        unordered_map<char,int>boxes[9];
        
        for(int i=0;i<n;i++){            
            for(int k=0;k<m;k++){
                char ch=board[i][k];
                if(ch!='.'&&(row[i][ch]++>0||column[k][ch]++>0||boxes[(i/3*3)+k/3][ch]++>0))
                    return false;
            }
        }
        return true;
    }
};