// naive approach -> because it gives overflow even for small values of n
// for example if n=20, then n! is 20! which is a lot of numbers
int countZeros(int n)
{
    int fact = 1;
    for(int i=2;i<=n;i++)
    {
        fact = fact*i;
    }
    int res = 0;
    while(fact%10 == 0)
    {
        res++;
        fact = fact/10;
    }
    return res;
}

// Efficient approach

