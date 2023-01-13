 int maxProfit(vector<int>& prices) {
       int n = prices.size();
       int mini = 0, maxi = prices[n-1];
       
       int maxDiff = 0;
       for(int i = n-1;i > 0;i--){
           mini = prices[i-1];
           maxi = max(maxi, prices[i]);
           maxDiff = max(maxDiff, maxi-mini);
       }
        if(maxDiff <= 0) return 0;
       return maxDiff;
    }
