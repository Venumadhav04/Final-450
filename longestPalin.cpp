string longestPalin (string S) {
        // code here
        int n = S.size();
        int arr[n][n];
        
        for(int i = 0;i < n;i++)
            for(int j = 0;j <n;j++) arr[i][j] = 0;
        
        
        for(int i = 0;i < n;i++){
            arr[i][i] = 1;
        }
        
        for(int i = 0;i < n-1;i++){
            if(S[i] == S[i+1])
            arr[i][i+1] = 1;
            else arr[i][i+1] = 0;
        }
        
        for(int i = 2;i < n;i++){
            for(int j = 0;j < n-i;j++){
                if(S[j] == S[j+i] && arr[j+1][j+i-1] == 1) arr[j][j+i] = 1;
                else arr[j][j+i] = 0;
            }
        }
        int ans = INT_MIN;
        string str = "";
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                
                if(arr[i][j] && ans < j-i+1){
                    ans = j-i+1;
                    str = S.substr(i, ans);
                }
                
            }
            
        }
        
        return str;
    }
