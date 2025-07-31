#include <stdio.h>  
struct student  
{  
     int b;  
    char c;
   char a;  
  
    
};  
int main()  
{  
   struct student stud1; 
     
   printf("The size of the student structure is %d", sizeof(stud1));  
   return 0;  
}  