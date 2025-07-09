#include<stdio.h>
int main(){
    int num,r,reversed=0;
    printf("enter the number");
    scanf("%d",&num);
    

    while(num>0){
        r=num%10;
        reversed=reversed*10+r;
        num=num/10;
    }
    printf("reversed the number%d\n",reversed);
}
       

    
    

    



