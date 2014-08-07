class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector< vector<int> > vec;
        for(int i=0;i<n;i++){
            vector<int> a(n,0);
            vec.push_back(a);
        }
        if(n==0)return vec;
        int i=0;
        int j=0;
        vec[i][j]=1;
        int flag=0;
        for(int num=2;num<=n*n;num++){
            if(j+1<n&&vec[i][j+1]==0&&flag==0){
                vec[i][j+1]=num;
                j++;
                flag=0;
                continue;
            }
            if(i+1<n&&vec[i+1][j]==0){
                vec[i+1][j]=num;
                i++;
                flag=1;
                continue;
            }
            if(j-1>=0&&vec[i][j-1]==0){
                vec[i][j-1]=num;
                j--;
                flag=2;
                continue;
            }
            else{
                if(vec[i-1][j]!=0){
                    flag=0;
                    num--;
                }
                else{
                    vec[i-1][j]=num;
                    i--;
                    flag=3;
                    continue;
                }
                
            }
            
        }
        return vec;
        
        
    }
};