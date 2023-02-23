int lps(String s) {
        // code here
        
        int n = s.length();
        
        int[] lps = new int[n];
        int i = 0, j =1;
        lps[0] = 0;
        
        while(j less than n){
            if(s.charAt(i) == s.charAt(j)){
                lps[j] = i + 1 ;
                i++;
                j++;
                
            }else{
                if(i == 0){
                    lps[j] = 0;
                    j++;
                }else{
                    i = lps[i-1];
                }
            }
        }
        
        return lps[n-1];
        
        //s.sustring(0, lps[n-1]);
        
        
       /* 
        
        if(lps[n-1] greater n/2){
            // return n/2;
            //return s.sustring(0, n/2);
        }else{
            // return lps[n-1];
            // s.sustring(0, lps[n-1]);
        }
        
        */
        
    }
