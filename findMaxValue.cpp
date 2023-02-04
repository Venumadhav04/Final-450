// A Naive method to find maximum value of mat[d][e]
// - ma[a][b] such that d > a and e > b
#include <bits/stdc++.h>
using namespace std;
#define N 5

// The function returns maximum value A(d,e) - A(a,b)
// over all choices of indexes such that both d > a
// and e > b.
int findMaxValue(int mat[N][N])
{
	// stores maximum value
	int minNums[N][N], maxNums[N][N];
  	for(int i = 0;i <N;i++){
    	minNums[0][i] = mat[0][i];
      maxNums[0][i] = mat[0][i];
    }
  
  	for(int i = 1;i <N;i++){
    	for(int j = 0;j <N;j++){
          if(j == 0){
          	minNums[i][j] = mat[i][j];
          }else {
            minNums[i][j] = min(mat[i][j], min(minNums[i-1][j-1], minNums[i][j-1]));
          }	
        }
    }
  	
  	for(int i = 1;i <N;i++){
    	for(int j = 0;j <N;j++){
          if(j == 0){
          	maxNums[i][j] = mat[i][j];
          }else {
 maxNums[i][j] = max(mat[i][j], max(maxNums[i-1][j-1], maxNums[i][j-1]));
          }	
        }
    }
   
  int ans = INT_MIN;
  for(int i = 0;i <N;i++){
    	for(int j = 0;j <N;j++){
          ans = max(ans, maxNums[i][j] - minNums[i][j]);
        }
    }
  
  return ans;
}

// Driver program to test above function
int main()
{
int mat[N][N] = {
				{ 1, 2, -1, -4, -20 },
				{ -8, -3, 4, 2, 1 },
				{ 3, 8, 6, 1, 3 },
				{ -4, -1, 1, 7, -6 },
				{ 0, -4, 10, -5, 1 }
			};
	cout << "Maximum Value is "
		<< findMaxValue(mat);

	return 0;
}
