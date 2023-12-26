#include<stdio.h>
void display(); //Function prototype

int main(){

    int a;
    printf("intitalising display\n");
    display();
    printf("Display function finished its work\n");
    return 0;
}

//function definition
void display(){
    printf("This is display\n");
}