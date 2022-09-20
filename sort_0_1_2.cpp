void sort012(int a[], int n)
{
    int start = 0;
    int mid = 0;
    int end = n-1;
    
    while(mid <= end)
    {
        int currentNum = a[mid];
        
        switch (currentNum) {
            case 0:
                a[mid] = a[start];
                a[start] = 0;
                mid++;
                start++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                a[mid] = a[end];
                a[end] = 2;
                end--;
                break;
        }
    }
    
}
