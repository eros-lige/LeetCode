class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        int n=board.size();
        int m=board[0].size();
        if(n<=0||m<=0) return false;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!((board[i][j]>='0'&&board[i][j]<='9')||board[i][j]=='.'))
                    return false;
                if(board[i][j]!='.'&&!ivs(board,i,j)){
                    return false;
                }
            }
        }
        return true;
        
    }
    
    bool ivs(vector<vector<char> > board,int a,int b){
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            if(i!=a&&board[i][b]==board[a][b])
                return false;
            if(i!=b&&board[a][i]==board[a][b])
                return false;
            int r=3*(a/3) + i/3; 
            int c=3*(b/3) + i%3;
            if(a!=r&&b!=c&&board[r][c]==board[a][b])
                return false;
        }
        return true;
        
    }
};