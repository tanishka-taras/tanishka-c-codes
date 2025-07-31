#include <stdio.h>  
int main(){  
   FILE *fp;  
   fp = fopen("file1.txt", "a");
   fputc('a',fp);
   fclose(fp); 
}  