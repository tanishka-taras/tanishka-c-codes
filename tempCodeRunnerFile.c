#include<stdio.h>
int main(){
    int i=0,j=0;
    int arr[5][2]={{1,2},{2,3},{3,4},{4,5},{5,6}};

    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d,%d=%d\n",i,j,arr[i][j]);
        }
    }


}