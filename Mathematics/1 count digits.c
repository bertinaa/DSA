//Iterative solution
int countDigits(long int){
  int count = 0;
  while(n!=0){
    n=n/10;
    ++count;
  }
  return count;
}

//recursive solution
int countDigits(long int){
if(n==0)
  return 0;
return 1+ countDigits(n/10); 
  }
