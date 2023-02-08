string countAndSay(int n) {
        if(n == 1) return "1";
        string result = "1";
        int size = 0;
        char ch;
        string temp;
        for(int i = 1;i < n;i++){
            temp = "";
            size = 0;
            for(int j = 0;j < result.size();j++){
                ch = result[j];
                while(j < result.size() && result[j] == ch){
                    size++;
                    j++;
                }
                j--;
                temp = temp + to_string(size) + result[j];
                size = 0;
            }
            result = temp;
        }
        return result;
    }
