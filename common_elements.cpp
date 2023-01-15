vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            int starta = 0, enda = n1-1, startb = 0, endb = n2-1, startc = 0, endc = n3-1;
            
            while(starta<=enda && startb<=endb){
                if(A[starta] == B[startb]){
                    
                    while(C[startc] <= A[starta] && startc < n3){
                        if(C[startc++] == A[starta]){
                            if(ans.size() == 0) ans.push_back(A[starta]);
                            else if(ans[ans.size()-1] != A[starta])
                            ans.push_back(A[starta]);
                            break;
                        } 
                    }
                    starta++;
                    startb++;
                }else if(A[starta] < B[startb]){
                    starta++;
                }else{
                    startb++;
                }
            }
            
            return ans;
            
        }
