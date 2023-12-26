#include<stdio.h>

int sum(int a,int b);

int main(){
    int c = sum(5,7);
    printf("The sum is %d:\n",c);
    return 0;
}
int sum(int a,int b){
    int result = a+b;
    return result;
}