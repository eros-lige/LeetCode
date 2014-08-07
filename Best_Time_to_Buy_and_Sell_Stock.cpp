class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.empty()) return 0;
        int min=prices[0];
        int max=0;
        for(int i=1;i<prices.size();i++){
            min=prices[i]<min?prices[i]:min;
            max=(prices[i]-min)>max?(prices[i]-min):max;
        }
        return max;
    }
};