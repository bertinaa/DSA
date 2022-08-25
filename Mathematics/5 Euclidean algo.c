/******************************************************************************

Euclidean Algorithm
Let 'b' be smaller than 'a'
Then 
gcd(a,b) = gcd(a-b,b)
*******************************************************************************/

#include <stdio.h>
//naive solution
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;    
        }
    }
    return a;
}
//optimized solution
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
}
