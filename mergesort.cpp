#include<iostream>
using namespace std;

void mergearray(int arr[], int left, int mid, int right){
  
  int leftSize = mid - left +1;
  int rightSize = right - mid;
  int* leftArray = new int[leftSize];
  int* rightArray = new int[rightSize];
  
  for(int i = 0;i < leftSize;i++) leftArray[i] = arr[left+i];
  for(int i = 0;i < rightSize;i++) rightArray[i] = arr[mid+1+i];
  int leftIndex = 0, rightIndex = 0, mergeIndex = left;
  while(leftIndex < leftSize && rightIndex < rightSize){
    if(leftArray[leftIndex] <= rightArray[rightIndex]){
        arr[mergeIndex++] = leftArray[leftIndex++];
    }else{
        arr[mergeIndex++] = rightArray[rightIndex++];
    }
  }
  
  while(leftIndex < leftSize) arr[mergeIndex++] = leftArray[leftIndex++];
  while(rightIndex < rightSize) arr[mergeIndex++] = rightArray[rightIndex++];
  delete[] leftArray;
  delete[] rightArray;
  
}

void mergeSort(int arr[], int start, int end){
  if(start>=end) return;
  int mid = start+(end-start)/2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid+1, end);
  mergearray(arr, start, mid, end);
  
}

int main()
{
	int arr[] = { 12, 11,11,12,5,5,5, 13, 5, 6, 7 , 13};
	auto arr_size = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, arr_size - 1);
	for(int i = 0;i < arr_size;i++) cout<<arr[i]<<" ";

	return 0;
}
