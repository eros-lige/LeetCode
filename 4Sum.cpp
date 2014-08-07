class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector< vector<int> > result;
        if(num.size()<4) return result;
        sort(num.begin(),num.end());
        for(int i=0;i<num.size();i++){
            if(i>0&&num[i]==num[i-1]) continue;
            for(int j=i+1;j<num.size();j++){
                if(j>i+1&&num[j]==num[j-1]) continue;
                int left=j+1;
                int right=num.size()-1;
                while(left<right){
                    int sum=num[i]+num[j]+num[left]+num[right];
                    if(sum>target){
                        right--;
                    }
                    else if(sum<target){
                        left++;
                    }
                    //else if(left!=j+1 && num[left]==num[left-1]) left++;
                    //else if(right!=num.size()-1 && num[right]==num[right-1]) right--;
                    else{
                        vector<int> temp;
                        temp.push_back(num[i]);
                        temp.push_back(num[j]);
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
        }
        return result;
    }
};