long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans = (long long)arr[0];
	    long long maxVal = ans, minVal = ans;
	    long long temp;
	    for(int i = 1;i < n;i++){
	        temp = (long long) arr[i];
	        if(temp < 0) swap(maxVal, minVal);
	        
	        maxVal = max(temp, maxVal * temp);
	        minVal = min(temp, minVal * temp);
	        ans = max(ans, maxVal);
	    }
	    
	    return ans;
	}
