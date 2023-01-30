 int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        int startidx = 0;
        int endidx = 0;
        int sum = 0;
        int ans = INT_MAX;
        
        for(int i = 0;i < n;i++){
            sum+=arr[i];
            if(sum > x){
                
                while(sum - arr[startidx]  > x && i >= startidx){
                    sum -= arr[startidx];
                    startidx++;
                }
                ans = min(ans, i-startidx+1);
                
                sum -= arr[startidx];
                startidx++;
            }
        }
        
        return ans;
        
    }
