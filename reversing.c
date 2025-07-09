#include<stdio.h>
int main(){
    int num,n,r,reversed=0;
    printf("enter the number");
    scanf("%d",&num);
    
n=num;
    while(num>0){
        r=num%10;
        reversed=reversed*10+r;
        num=num/10;
    }
    printf("reversed the number%d\n",reversed);
    if(n==reversed)
    printf("it is palindrome");
    else
    printf("it is not palindrome");
}
       

    
    

    



