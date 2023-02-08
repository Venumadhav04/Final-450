#include <bits/stdc++.h>
using namespace std;
 
int isCyclicRotation(string& p, string& q)
{
    int i = 0, j = 0, k = 0, n = p.length();
    bool reset = false;
    while (i < 2 * n) {
        if (k == n)
            return 1;
        if (p[i % n] == q[j % n]) {
            i++;
            j++;
            k++;
        }
        else if (reset) {
            reset = false;
            i++;
        }
        else {
            reset = true;
            j = 0;
            k = 0;
        }
    }
    return 0;
}
 
int main()
{
    string str1 = "AACD", str2 = "ACDA";
    if (isCyclicRotation(str1, str2)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
