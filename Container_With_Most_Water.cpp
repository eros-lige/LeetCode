class Solution {
public:
    int maxArea(vector<int> &height) {
        if(height.size()<=0) return 0;
        int max=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int currentArea=(height[i]<height[j]?height[i]:height[j])*(j-i);
            if(currentArea>max){
                max=currentArea;
            }
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
            
        }
        return max;
    }
};