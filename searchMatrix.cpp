bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int curr = 0;
        int rowidx = 0, colidx = col-1;
        while(rowidx <= row-1 && colidx >= 0){
            curr = matrix[rowidx][colidx];
            if(curr == target) return true;
            if(curr > target) colidx--;
            else rowidx++;
        }
        return false;
    }
