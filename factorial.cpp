vector<int> factorial(int N){
        // code here
        vector<int> ans;
        ans.push_back(1);
        
        int carry = 0;
        for(int i = 1;i <= N;i++){
            for(int j = 0;j < ans.size();j++){
                ans[j] = ans[j]*i + carry;
                carry = ans[j]/10;
                ans[j] = ans[j]%10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry = carry/10;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
