#include<stdio.h>
#include<string.h>
struct teacher
{
    int id;
    int num;
    char name;
}s1;
int main(){
    s1.id=80;
    s1.num=450;
    strcpy(s1.name,"tanu");


    printf("id %d\n",s1.id);
    printf("num %d\n",s1.num);
    printf("nmae %s\n",s1.name);



}
