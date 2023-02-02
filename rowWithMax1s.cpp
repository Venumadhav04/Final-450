	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxZeros = INT_MIN, ansRow = -1;
	    
	    for(int i = 0;i < n;i++){
	        for(int j = 0;j < m;j++){
	            if(arr[i][j]){
	                if(m-j > maxZeros){
	                    maxZeros = m-j;
	                    ansRow = i;
	                    break;
	                }
	            }
	        }
	    }
	    return ansRow;
	}
