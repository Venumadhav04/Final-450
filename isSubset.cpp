string isSubset(int a1[], int a2[], int n, int m) {
    
    sort(a1, a1+n);
    sort(a2, a2+m);
    int flag = 0;
    int idx1 = 0;
    for(int i = 0;i < m;i++){
        while(idx1 < n){
            if(a1[idx1] == a2[i]) break;
            idx1++;
            
        }
        if(idx1 == n) return "No";
        idx1++;
    }
    
    return "Yes";
}
