#include<stdio.h>

int main(){
    int a ;
    printf("Enter the value of a :");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("output is add\n");
            break;
        case 2:
            printf("output is print\n");
            break;
        default:
            printf("its a default\n");
            break;


    }

    return 0;
}