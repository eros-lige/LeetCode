class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        result.push_back(1);
        if(rowIndex==0) return result; 
        for(int i=1;i<=rowIndex;i++){
            for(int j=result.size()-1;j>=1;j--){
                result[j]=result[j]+result[j-1];
            }
            result.push_back(1);
        }
        return result;
    }
};