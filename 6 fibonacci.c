//using recursion
int fib(int n)
{
if(n==0 || n==1)
    return n;
 return fib(n-1)+fib(n-2);
}


int fib(int n)
{
int f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i =2; i<=2; i++)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}

//best solution in terms of auxilliary and space complexity because constant number of variables are used (a,b,c) and they are not dependant on n so theta(1) is the space/auxiliary comp
int fib(int n)
{
if(n==0 || n==1)
    return n;
 int a=0, b=1;
    for(int i=2; i<=n; i++)
    {
        c = a+b;
        a=b;
        b=c;
    }
    return c;
}
