// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Find all subsequences
void printSubsequence(string input, string output, int idx)
{
    if(idx == input.size()) cout<<output<<" ";
    else{
        printSubsequence(input, output, idx+1);
        output += input[idx];
        printSubsequence(input, output, idx+1);
    }
    
}
 
// Driver code
int main()
{
    // output is set to null before passing in as a
    // parameter
    string output = "";
    string input = "abcd";
 
    printSubsequence(input, output, 0);
 
    return 0;
}
