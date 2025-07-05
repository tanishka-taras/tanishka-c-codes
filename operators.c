#include<stdio.h>
int main(){
    int a=20,b=10;

    printf("add=%d\n",a+b);
    printf("sub=%d\n",a-b);
    printf("mul=%d\n",a*b);
    printf("div=%d\n",a/b);
    printf("nod=%d\n",a%b);


    printf("equal to=%d\n",a==b);
    printf("not equalto=%d\n",a!=b);
    printf("greaterthan=%d\n",a>b);
    printf("lessthan=%d\n",a<b);
    printf("greaterthanequalto=%d\n",a>=b);
    printf("lessthaneuqalto=%d\n",a<=b);


    printf("bitwise and=%d\n",a&b);
    printf("bitwise or=%d\n",a|b);
    printf("boitwise not=%d\n",a^b);


    printf("left shift =%d\n",a<<2);
    printf("right shift=%d\n",a>>2);


    printf("logical and=%d\na&&b",a>b);
    printf("logical or=%d\na||b",a<b);
    printf("logical not=%d\na!b",a>b);
}