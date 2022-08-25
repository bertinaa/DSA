int deleteEle(int n, int arr[],int x) // x -> element to be deleted
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i==n) // if element to be deleted was not found in the array
    {
        return n;
    }
    for(int j=i; j<n-1; j++)
    {
        arr[j] = arr[j+1];
    }
    return (n-1);
}
