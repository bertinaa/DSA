#include<stdio.h> 
#include<limits.h>  
int min(int a,int b)
{
    if(a<=b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}
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
    int jump[size],j;  //jump[] 
    jump[0]=0;
    for(i=1;i<size;i++)
    {
        jump[i]=INT_MAX;
    }
    for(i=1;i<size;i++) //i=1;1<5
    {
        for(j=0;j<i;j++)//j=0;0<1
        {
           if(i<=j+arr[j]) //1<=1 
           {
               jump[i]=min(jump[j]+1,jump[i]);
           }
        }
    }

    printf("%d ",jump[size-1]);

}
