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







// iteration type solution


     const long long int mod = 1000000007;
    long long int add(long long int x, long long int y) {
        return ((x % mod) + (y % mod)) % mod;
    }
    long long int sub(long long int x, long long int y) {
        return ((x % mod) - (y % mod) + mod) % mod;
    }
    long long int  countPS(string str)
    {
        long long int  N = str.length();

        // create a 2D array to store the count of palindromic
        // subsequence
        long long int  cps[N + 1][N + 1];
        memset(cps, 0 , sizeof(cps));

        // palindromic subsequence of length 1
        for (long long int  i = 0; i < N; i++)
            cps[i][i] = 1;

        // check subsequence of length L is palindrome or not
        for (long long int  L = 2; L <= N; L++)
        {
            for (long long int  i = 0; i <= N - L; i++)
            {
                long long int  k = L + i - 1;
                if (str[i] == str[k])
                    cps[i][k] = add(cps[i][k - 1] , add(cps[i + 1][k] , 1LL)) % mod;
                else
                    cps[i][k] = add(cps[i][k - 1] , sub(cps[i + 1][k] , cps[i + 1][k - 1])) % mod;
            }
        }

        // return total palindromic subsequence
        return cps[0][N - 1] % mod;
    }
