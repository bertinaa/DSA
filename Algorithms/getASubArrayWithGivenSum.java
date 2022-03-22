#include<stdio.h> 
int main()
{
    int size; 
    scanf("%d",&size); 
    int arr[size]; 
    int i; 
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum;
    scanf("%d",&sum); 
    int left=0,right=0,curr=0; 
    while(right<=left)
    {
       if(curr==sum)
       {
           break;
       }
       else if(curr<sum)
       {
           curr=curr+arr[left]; 
           left++;
       }
       else if(curr>sum)
       {
           curr=curr-arr[right]; 
           right++;
       }
    }
for(i=right;i<left;i++)
{
    printf("%d ",arr[i]);
}
}
