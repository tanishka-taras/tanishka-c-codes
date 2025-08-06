#include <iostream>    
using namespace std;    
int main() {    
   
   int numbers[] = {7, 5, 6, 12, 35, 27};    
int  sum = 0;    
int count = 0;    
int  average;    
cout << "The numbers are: ";    

 for (int  &n : numbers) {    
  cout << n << "  ";
  
sum += n;    
 
++count;    
  }    

cout << "\nTheir Sum = " << sum << endl;    
 
average = sum / count;    
cout << "Their Average = " << average << endl;    
    
  return 0;    
}