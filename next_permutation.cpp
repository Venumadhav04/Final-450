void nextPermutation(vector<int>& nums) {
       int index = 0;
        int n = nums.size();
        
       for(index = n-1;index > 0;index--){
           if(nums[index - 1] < nums[index]) break;
       }
       if(index == 0){
           sort(nums.begin(), nums.end());
           return;
       }
        int numgrethidx = nums[index];
        int mainidx = index;
        for(int i = index;i < n;i++){
            if(nums[i] > nums[index-1] && numgrethidx > nums[i]){
                numgrethidx = nums[i];
                mainidx = i;
            }
        }
        swap(nums[mainidx], nums[index-1]);
        sort(nums.begin()+index, nums.end());
    }
