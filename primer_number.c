#include<stdio.h>

int main(){
    int i,n,prime=0;
    printf("Enter the number to check:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0)
            prime=1;
            break;
    }
    if(prime==1)
        printf("it is not a prime number\n");
    else    
        printf("it is a prime number\n");
    return 0;
}