#include <stdio.h>
//bool isPrime is more efficient as it has O(n^1/2) as it's time complexity
bool isPrime(int n)
{
    if (n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5; i*i<=n;i=i+6)
        if(n%i==0 || n%(i+2)==0)
           return false;
    return true;
}


//void isPrime has O(n)
void isPrime(int n)
{
    int i, count =0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }if(count==2){
        printf("Prime Number");
    }else{
        printf("Not a prime number");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;
}


// bool
