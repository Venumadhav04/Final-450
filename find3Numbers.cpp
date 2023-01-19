bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        if(n < 3) return false;
        
        int target;
        
        for(int i = 0;i < n;i++){
            unordered_set<int> mp;
            target = X-A[i];
            for(int j = i+1;j < n;j++){
                if(mp.find(A[j]) != mp.end()) return true;
                mp.insert(target-A[j]);
            }
            
        }
        
        return false;
    }
