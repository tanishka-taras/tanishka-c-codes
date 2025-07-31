#include<stdio.h>
void main(){
    int i,j,c;

int  a[10]={995,854,741,651,555,447,331,295,185,100};

    for (i=0,i<10,i++)
    {
        for(j=i+1,j<10,j++)
        {
    
    if(a[j]>a[i]){
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}
    }
    printf("printing third largest element\n");
    {
        printf("%d\n",a[3]);
    }



}