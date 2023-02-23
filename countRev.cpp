int countRev (string s)
{
    // your code here
    int n = s.size();
    
    if(n%2) return -1;
    
    stack<char> st;
    
    for(int i = 0;i < n;i++){
        if(st.empty()){
            st.push(s[i]);
            continue;
        }
        if(s[i] == '}' && st.top() == '{') st.pop();
        else{
            st.push(s[i]);
        }
        
    }
    int openCount = 0, closeCount = 0;
    while(st.size()){
        if(st.top() == '{') openCount++;
        else closeCount++;
        
        st.pop();
    }
    
    int ans = openCount/2 + closeCount/2;
    if(openCount%2 && closeCount%2) ans+=2;
    
    return ans;
}
