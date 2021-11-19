#include <stdio.h>
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
