#include<stdio.h>    
#include <string.h>      
struct employee        
{   int id;        
    char name[20];
    
    struct date{
    int dd;
    int mm;
    int yyyy;
    }dod;

}n1;
int main(){
    n1.id=202;
    strcpy(n1.name,"swapnil jagtap");
    n1.dod.dd=21;
    n1.dod.mm=07;
    n1.dod.yyyy=2025;

    printf(" n1.id %d\n",n1.id);
    printf("name%s\n",n1.name);
    printf("date (dd/mm/yyyy)%d%d%d\n",n1.dod.dd,n1.dod.mm,n1.dod.yyyy);
}

