// Naive solution
#include <stdio.h>
int min(int a,int b)
{
    int minimum = (a<b)?a:b;
    return minimum;
}
int gcd(int a,int b)
{
    int res = min(a,b);
    // we are first checking if the minimum of the two
    // is the HCF or not
    // then we keep subtracting the min to get the hcf
    while(res>0)
    {
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
