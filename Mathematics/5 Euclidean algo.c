/******************************************************************************

Euclidean Algorithm
Let 'b' be smaller than 'a'
Then 
gcd(a,b) = gcd(a-b,b)
*******************************************************************************/

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
