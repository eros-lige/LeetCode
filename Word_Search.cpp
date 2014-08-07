class Solution {
public:
    bool exist(vector<vector<char> > &board, string word) {
        if(word.size()<=0||board.size()<=0||board[0].size()<=0) return false;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(word[0]==board[i][j]&&fun(board,word,i,j,0))
                    return true;
            }
        }
        return false;
    }
    bool fun(vector<vector<char> > &board, string &word, int i, int j,int index){

        if(index==word.size()-1) return true;
        char temp= board[i][j];
        board[i][j]='#';
        if(i-1>=0&&board[i-1][j]==word[index+1]&&fun(board,word,i-1,j,index+1))return true;
        if(i+1<board.size()&&board[i+1][j]==word[index+1]&&fun(board,word,i+1,j,index+1))return true;
        if(j-1>=0&&board[i][j-1]==word[index+1]&&fun(board,word,i,j-1,index+1))return true;
        if(j+1<board[0].size()&&board[i][j+1]==word[index+1]&&fun(board,word,i,j+1,index+1))return true;
        board[i][j]= temp;
        return false;
    }
};