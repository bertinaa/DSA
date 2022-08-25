//Naive solution
#include<stdio.h>
int max(int a,int b)
{
    int maximum = (a>b)?a:b;
    return maximum;
}
int lcm(int a, int b)
{
    int res = max(a,b);
    while(1)
    {
        if(res%a==0 && res%b==0)
        {
            return res;
        }
        res++;
    }
    return res;
}

//optimised solution -> 
// (a*b) = gcd(a,b) * lcm(a,b)
// lcm = (a*b)/gcd(a,b)
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
)
int lcm(int a, int b)
{
    return  (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lcm(a,b));

    return 0;
}
