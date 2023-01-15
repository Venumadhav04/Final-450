 bool subArrayExists(int arr[], int n)
    {
        //Your code here\
        unordered_map<int, int> mp;
        int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];

        // If prefix sum is 0 or
        // it is already present
        if (sum == 0 || sumSet.find(sum) != sumSet.end())
            return true;

        sumSet.insert(sum);
    }
    return false;
        
    }
