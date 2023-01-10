void rotate(int arr[], int n)
{
    for(int i = 1;i < n;i++){
        swap(arr[i], arr[0]);
    }
}
