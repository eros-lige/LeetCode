class Solution {
public:

    bool ivs(vector<vector<char> > & board,int a,int b,char d){
        int n=9;
        for(int i=0;i<n;i++){
            if(i!=a&&board[i][b]==d)
                return false;
            if(i!=b&&board[a][i]==d)
                return false;
            int r=3*(a/3) + i/3; 
            int c=3*(b/3) + i%3;
            if(a!=r&&b!=c&&board[r][c]==d)
                return false;
        }
        return true;
        
    }
    void solveSudoku(vector<vector<char> > &board) {
         ss(board);
    }

    bool ss(vector<vector<char>> & board){
        for(int ii=0;ii<9;ii++){
            for(int jj=0;jj<9;jj++){
                if(board[ii][jj]=='.'){
                    for(int k=1;k<=9;k++){
                        if(ivs(board,ii,jj,k+'0')){
                            board[ii][jj]=k+'0';
                            if(ss(board)) return true;
			                board[ii][jj]='.';
                        }
                        
                    }
                    return false;
                }
            }
        }
        return true;
    }
};