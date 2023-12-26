#include<stdio.h>
void sumAndAvg(int a,int b,int *sum,float *avg){
     *sum = a+b;
     *avg = *sum/2;
}
int main(){
    int x=3,y=7,sum;
    float avg;
    sumAndAvg(x,y,&sum,&avg);
    printf("The sum is %d:\n",sum);
    printf("The avg is %f:\n",avg);
    return 0;
}

