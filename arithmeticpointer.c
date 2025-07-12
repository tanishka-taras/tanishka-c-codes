#include<stdio.h>
int main(){
    int number=50;
    int *p;
    p=&number;
    printf("address of p variable%d\n",p);
    p=p+3;
    printf("after adding3 :valueof p%d\n",p);
    
}