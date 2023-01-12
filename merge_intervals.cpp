vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        int size = intervals.size();
        ans.push_back({intervals[0]});
        int start = 0;
        for(int i = 1;i <  size;i++){
            if(ans[start][1] >= intervals[i][0]){
                if(ans[start][1] < intervals[i][1])
                ans[start][1] = intervals[i][1];
            }else {
                ans.push_back({intervals[i][0], intervals[i][1]});
                start++;
            }
        }
        return ans;
    }
