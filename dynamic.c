#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,*p,sum=0;
    printf("enter a number of elements");
    scanf("%d\n",&n);

    p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("unable to allocate memory");
    }
    printf("enter of elements arry");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",p+i);
        sum=+*(p+i);
    }
    printf("sum=%d",sum);
    free(p);
}