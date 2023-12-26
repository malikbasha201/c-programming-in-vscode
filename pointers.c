#include<stdio.h>

int main(){
    int i =27;
    int *j=&i;
    printf("Add of i is %u:\n",&i);
    printf("Add of i is %u:\n",j);
    printf("Add of j is %u:\n",&j);
    printf("value of i is %d:\n",*(&i));
    printf("value of i is %u:\n",*j);
    int **k=&j;
    printf("Add of j is %u:\n",k);
    return 0;
}
