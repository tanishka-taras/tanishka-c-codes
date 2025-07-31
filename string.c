#include<stdio.h>
#include<string.h>
int main(){
    char a[8]="tanishka";

    printf("char valu %s\n",a);



    char b[11]="tpointeach";
    printf("%c\n",b[7]);
    printf("%c\n",a[9]);
    printf("%c\n",a[2]); 



    char c[]="strings";
    printf("before update of string%s\n",c);
    c[5]='g';
    c[0]='S';
    printf("after updating string%s\n",c);


    char string[]="tpointeach";
    int k=strlen(string);
    printf("length of string%d\n",k);


    char s[20];
    printf("enter the string");
    scanf("%s\n",s);
    printf("you entered %s\n",s);
}