void rotateArray(int *a, int start, int end)
{
    while(start<=end)
    {
        int temp = a[start];
        a[start++] = a[end];
        a[end--] = temp;
    }
}
void rotate(int arr[], int n)
{
    rotateArray(arr, 0, n-2);
    rotateArray(arr, 0, n-1);
}
