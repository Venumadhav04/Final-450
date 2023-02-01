vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int dir = 0, top = 0, left = 0, bottom = r-1, right = c-1, minRow;
        vector<int> ans;
        while(top<=bottom && left<=right){
            if(dir == 0){
                for(int i = left;i <= right;i++){
                    ans.push_back(matrix[top][i]);
                }
                dir = (dir+1)%4;
                top++;
            }
            else if(dir == 1){
                for(int i = top;i <= bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                dir = (dir+1)%4;
                right--;
            }
            else if(dir == 2){
                for(int i = right;i >= left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                dir = (dir+1)%4;
                bottom--;
            }
            else if(dir == 3){
                for(int i = bottom;i >= top;i--){
                    ans.push_back(matrix[i][left]);
                }
                dir = (dir+1)%4;
                left++;
            }
        }
        
        return ans;
    }
