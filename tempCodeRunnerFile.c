#include<stdio.h>
void change(){
    int arr[4][4],i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("enter a[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
      
 printf("printing a element \n");
 for(i=0;i<4;i++)
 {
    printf("\n");
    for(j=0;j<4;j++)
    {
        printf("%d\t",arr[i][j]);
    }
}
}      
        
    
