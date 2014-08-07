class Solution {
public:
    int count;
    int queen[100000];
    int totalNQueens(int n) {
        NQUEENS(0,n);
        return count;
    }
    
    int PLACE(int n)
    {
        int i;
        for(i = 0; i < n; i++)
        {
            if(queen[i] == queen[n] || abs(queen[i] - queen[n]) == (n - i))
            {
                return 1;
            }
        }
        return 0;
    }
    void NQUEENS(int n,int max)
    {
        int i;
        for(i = 0; i < max; i++)
        {       
            queen[n] = i;
            if(!PLACE(n))
            {           
                if(n == max - 1)
                {
                    count++;
                }         
                else
                {
                    NQUEENS(n + 1,max);
                }
            }
        }
    }
    
};