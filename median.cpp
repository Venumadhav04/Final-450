int median(vector<vector<int>> &matrix, int R, int C){
        // code here       
        int desired = (R*C +1)/2;
        int min = INT_MAX, max = INT_MIN;
        
        for(int i = 0;i < R;i++){
            
                if(min > matrix[i][0]) min = matrix[i][0];
                if(max < matrix[i][C-1]) max = matrix[i][C-1];
            
        }
        int mid, count = 0;
        
    while(min < max){
            mid = min + (max-min)/2;
            for(int i = 0;i < R;i++){
                for(int j = C-1;j >= 0;j--){
                    if(matrix[i][j] <= mid){
                        count = count +  j+1;
                        break;
                    } 
                }
            }
            // for (int i = 0; i < R; ++i)
            //     count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            if(count < desired) min = mid+1;
            else max = mid;
            count = 0;
        }
        
        return min;
    }
