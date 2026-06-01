class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int n=prices.size();
        int minprice=prices[0],maxprofit=0;
        for(int day=1;day<n;day++){
            maxprofit=max(maxprofit,prices[day]-minprice);
            minprice=min(minprice,prices[day]);
        }
        return maxprofit;
    }
};
