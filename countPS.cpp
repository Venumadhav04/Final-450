long long int rec(string str, int i, int j, vector<vector<long long int>> dp){
        
        if(i>j) return 0;
        else if(i == j) return 1;
        else if(dp[i][j] != -1) return dp[i][j];
        
        long long int mod = 1e9+7;
        
        if(str[i] == str[j]){
            dp[i][j] = 1+(rec(str, i+1, j, dp) + rec(str, i, j-1, dp))%mod;
        }else{
            dp[i][j] = ((rec(str, i+1, j, dp) + rec(str, i, j-1, dp) - rec(str, i+1, j-1, dp))%mod + mod)%mod;
        }
        
        return dp[i][j];
    }
    long long int  countPS(string str)
    {
       //Your code here
       int n = str.size();
       vector<vector<long long int>> dp(n, vector<long long int> (n, -1));
       
       return rec(str, 0, n-1, dp);
    }
