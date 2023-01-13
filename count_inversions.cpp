class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.


long long mergearray(long long arr[], long long left, long long mid, long long right){
  
  long long leftSize = mid - left +1;
  long long rightSize = right - mid;
  long long* leftArray = new long long[leftSize];
  long long* rightArray = new long long[rightSize];
  long long inversion_count = 0;
  for(int i = 0;i < leftSize;i++) leftArray[i] = arr[left+i];
  for(int i = 0;i < rightSize;i++) rightArray[i] = arr[mid+1+i];
  int leftIndex = 0, rightIndex = 0, mergeIndex = left;
  while(leftIndex < leftSize && rightIndex < rightSize){
    if(leftArray[leftIndex] <= rightArray[rightIndex]){
        arr[mergeIndex++] = leftArray[leftIndex++];
    }else{
        arr[mergeIndex++] = rightArray[rightIndex++];
        inversion_count = inversion_count+leftSize-leftIndex;
    }
  }
  
  while(leftIndex < leftSize) arr[mergeIndex++] = leftArray[leftIndex++];
  while(rightIndex < rightSize) arr[mergeIndex++] = rightArray[rightIndex++];
  delete[] leftArray;
  delete[] rightArray;
  return inversion_count;
}

long long mergeSort(long long arr[], long long start, long long end){
  if(start>=end) return 0;
  long long mid = start+(end-start)/2;
  long long inversion_count = 0;
  inversion_count+=mergeSort(arr, start, mid);
  inversion_count+=mergeSort(arr, mid+1, end);
  inversion_count+=mergearray(arr, start, mid, end);
  
  return inversion_count;
  
}
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long inversion_count = 0;
         long long ans = 0;
        ans+=mergeSort(arr, 0, N-1);
        
        return ans;
    }
};
