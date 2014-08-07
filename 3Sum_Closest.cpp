class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int closest=num[0]+num[1]+num[2];
        for(int i=0;i<num.size()-2;i++){
            for(int j=i+1;j<num.size()-1;j++){
                for(int k=j+1;k<num.size();k++){
                    int sum=num[i]+num[j]+num[k];
                    if(sum==target) return sum;
                    if(abs(sum-target)<abs(closest-target)){
                        closest=sum;
                    }
                    
                }
            }
        }
        return closest;
    }
};