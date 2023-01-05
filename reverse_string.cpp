  void reverseString(vector<char>& s) {
        int size = s.size();
        int start = 0, end = size-1;
        char temp;
        while(end>start){
            temp = s[end];
            s[end] = s[start];
            s[start] = temp;
            start++;
            end--;
        }
