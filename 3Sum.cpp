class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int>> result;
        if(num.size()<=2) return result;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size()-2;i++){
            if(i>0&&num[i]==num[i-1]) continue;
            int target=-num[i];
            int left=i+1;
            int right=num.size()-1;
            while(left<right){
                int sum=num[left]+num[right];
                if(sum>target){
                    right--;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    vector<int> temp;
                    temp.push_back(num[i]);
                    temp.push_back(num[left]);
                    temp.push_back(num[right]);
                    result.push_back(temp);    
                    int k=left+1;
                    while(k<right&&num[k]==num[left]) k++;
                    left=k;
                    k=right-1;
                    while(k>left&&num[k]==num[right])k--;
                    right=k;
                    
                }
            }
            
        }
        
        return result;
        
    }
};