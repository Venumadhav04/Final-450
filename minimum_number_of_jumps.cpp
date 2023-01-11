int minJumps(int a[], int n){
        // Your code here
        int maxR = a[0];
        int step = a[0];
        int jump = 1;
        if(a[0] == 0) return -1;
        if(n == 1) return 0;
        if(a[0] >= n-1) return 1;
        for(int i = 1;i < n;i++){
            maxR = max(maxR, i+a[i]);
            if(i >= n-1) return jump;
            step--;
            if(step == 0){
                if(maxR <= i) return -1;
                jump++;
                step = maxR - i;
            }
        }
        return jump;
    }
