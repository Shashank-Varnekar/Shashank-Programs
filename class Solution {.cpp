class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i , j, maxR, profit, res = INT_MIN;
        for(i=0; i<n-1; i++){
            
            maxR = INT_MIN;
            for(j = i+1; j<n; j++){
                maxR = max(maxR, prices[j]);
            }
            
            profit = maxR - prices[i];
            
            res = max(res, profit);
        }
        
        return max(0, res);
    }
};