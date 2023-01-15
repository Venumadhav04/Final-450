
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
    vector<int> factorial(int N){
        // code here
        vector<int> ans;
        ans.push_back(1);
        int ans_size = 1;
        int carry = 0;
        for(int i = 1;i <= N;i++){
            ans_size = ans.size();
            for(int j = 0;j < ans_size;j++){
                ans[j] = ans[j]*i+carry;
                carry = 0;
                if(ans[j] > 9){
                    if(j == ans.size()-1){
                        ans.push_back(ans[j]/10);
                        ans[j] = ans[j]%10;
                    }else{
                        
                        carry = ans[j]/10;
                        ans[j] = ans[j]%10;
                    }
                }
            
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    
    }



int main() {
   
        vector<int> result = factorial(10);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;

    return 0;
} 
