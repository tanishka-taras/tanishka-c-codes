#include<stdio.h>
void arry(int arr[])
{
    printf("elements of arry");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }


}
int main()
{
    int arr[5]={10,30,45,67,34,};
    arry(arr);
    
}