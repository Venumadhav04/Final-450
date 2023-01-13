 int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i = 0;i < n;i++){
            if(mp[arr[i]]) ans+=mp[arr[i]];
            mp[k-arr[i]]++;
        }
        return ans;
    }
