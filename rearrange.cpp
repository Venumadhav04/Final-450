void rearrange(int arr[], int n)
{
	int negativeidx = 0;
  int temp;
    for(int i = 0;i < n;i++){
    	if(arr[i] < 0) {
        	while(arr[negativeidx] < 0 && negativeidx < n && negativeidx != i){
            	negativeidx+=2;
            }
          if(negativeidx < n){
          		temp = arr[negativeidx];
                arr[negativeidx] = arr[i];
                arr[i] = temp;
          	}
            
        }
    }
}
