class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0;
        int bestbuy=prices.at(0);
        for(int i=0;i<prices.size();i++){
            if(bestbuy<prices[i]){
                m=max(m,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return m;
    }
};
