
class Solution
{
public:
    int help(string A, unordered_set<string> st, int idx){
        if(idx == A.size()) return 1;
        string temp;
        
        for(int i = idx;i < A.size();i++){
            temp += A[i];
            if(st.find(temp) != st.end()) {
                 if(help(A, st, i+1))
                 return 1;
            }
        }
        
        return 0;
    }
    int wordBreak(string A, vector<string> &B) {
        unordered_set<string> st;
        for(auto a:B) st.insert(a);
        
        return help(A, st, 0);
    }
};
