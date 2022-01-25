//using recursion
int fun (int n){
  if(n<=0)
    return 0;
  return n + fun(n-1)
}
