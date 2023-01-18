int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr, arr+N);
      int ans = 1;
      int numofconc = 1;
      
      for(int i = 1;i < N;i++){
          if(arr[i] == arr[i-1]) continue;
          if(arr[i] == arr[i-1]+1){
              numofconc++;
              ans = max(ans, numofconc);
          }else{
              numofconc = 1;
          }
      }
      
      return ans;
    }
