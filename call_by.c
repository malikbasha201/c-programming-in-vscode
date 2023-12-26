#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
int sum(int m,int n);

int main(){
    int x = 3,y = 7;
    printf("The values of x and y before swap is %d and %d\n",x,y);
    //wrong_swap(x,y); will not wrok due to call by value
    swap(&x,&y); //will work due to call by reference
    printf("The values of x and y after swap is %d and %d\n",x,y);
    printf("The sumof x and y is %d:\n",sum(x,y));
    return 0;
}

void wrong_swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
int sum(int m,int n){
    return m+n;
}