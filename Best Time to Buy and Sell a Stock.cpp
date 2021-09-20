class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int potd=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mini){
                mini=prices[i];
            }potd=prices[i]-mini;
            maxi=max(maxi,potd);
        }return maxi;
        
    }
};
