#include<stdio.h>

int main(){
    int n;
    printf("Enter the natural number you want to print the series:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("The Numnber is :%d\n",i);
    }
    return 0;
}