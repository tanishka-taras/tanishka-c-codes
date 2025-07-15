#include<stdio.h>
void main(){
    int i,j,c;
    int a[5]={108,99,85,77,65};

    for(i=0;i<5;i++)
{
    for (j=i+1;j<5;j++)
    {

if(a[j]>a[i]){
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
    }
}
printf("print third largest element \n");

    printf("%d\n",a[3]);
}


    
