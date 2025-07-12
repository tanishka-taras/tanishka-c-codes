#include<stdio.h>
int main(){
    int number=50;
    int *p,**pp;
    p=&number;
    pp=&p;

    printf("address of the number %d\n",&number);
    printf("address of p variable%d\n",p);
    printf("value of *P%d\n",*p);
    printf("address of pp variable %d\n",pp);
    printf("value of **pp %d\n ",*p);
}