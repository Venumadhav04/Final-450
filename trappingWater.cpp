long long trappingWater(int arr[], int n){
        // code here
        int prefixmax[n];
        int suffixmax[n];
        prefixmax[0] = arr[0];
        
        for(int i = 1;i < n;i++){
            prefixmax[i] = max(prefixmax[i-1], arr[i]);
            
        }
        suffixmax[n-1] = arr[n-1];
        
        for(int i = n-2;i >= 0;i--){
            suffixmax[i] = max(suffixmax[i+1], arr[i]);
        }
        long long ans = 0;
        for(int i = 1;i < n;i++){
            ans += min((long long)suffixmax[i], (long long)prefixmax[i]) - (long long)arr[i];
        }
        
        return ans;
    }
