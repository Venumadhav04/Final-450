long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    if(m > n) return 0;
    sort(a.begin(), a.end());
    
    long long mindiff = INT_MAX;
    long long endidx = m-1;
    long long startidx = 0;
    long long diff = 0;
    for(int i = 0;i < n && i+m-1 < n;i++){
        diff = a[i+m-1] - a[i];
        if(diff < mindiff){
            mindiff = diff;
            startidx = i;
            endidx = i+m-1;
            }
        }
        
        return a[endidx] - a[startidx];
    }   
