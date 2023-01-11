int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int minHeight = arr[0];
        int maxHeight = arr[n-1];
        int minDiff = arr[n-1] - arr[0];
        for(int i = 1;i < n;i++){
            if(arr[i]-k < 0) continue;
            minHeight = min(arr[0]+k, arr[i]-k);
            maxHeight = max(arr[n-1]-k, arr[i-1]+k);
            minDiff = min(minDiff, maxHeight-minHeight);
        }
        
        return minDiff;
    }
