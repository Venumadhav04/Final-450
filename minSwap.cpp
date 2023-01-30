int minSwap(int arr[], int n, int k) {
        // Complet the function
        int numslessthank = 0;
        for(int i = 0;i < n;i++){
            if(arr[i] <= k){
                arr[i] = 1;
                numslessthank++;
            }
            else arr[i] = 0;
        }
        int sum = 0;
        int i;
        for(i = 0;i < numslessthank;i++){
            sum+=arr[i];
        }
        int ans = numslessthank - sum;
        sum-=arr[0];
        for(i=1;i < n && i+numslessthank-1 < n;i++){
            sum+=arr[i+numslessthank-1];
            ans = min(ans, numslessthank - sum);
            sum-=arr[i];
        }
        
        return ans;
    }
