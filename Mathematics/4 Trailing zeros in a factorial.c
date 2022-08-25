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
// (5*2) contributes a 0. So trailing zeros can be found just by finding
// how many multiples of 5 are there in the number
// there can be more than one multiple of 5 in a number (eg. 25, 125, etc) 
// hence we do i*5 (5, 25, 125, etc) upto N
int countTrailingZeros(int n)
{
    int res = 0;
    for(int i=5; i<=n; i=i*5)
    {
        res = res + n/i;
    }
    return res;
}
