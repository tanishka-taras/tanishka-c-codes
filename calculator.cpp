#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=5;
    char oper;
    
    cout<<"choose an operator(+,-,*,/)"<<endl;
    cin>>oper;
    
    switch (oper)
    {
        case '+':
        cout<<"+"<<(a+b)<<endl;
        
        case'-':
        cout<<"-"<<(a-b)<<endl;
        
        case'*':
        cout<<"*"<<(a*b)<<endl;
        
        case'/':
        cout<<"/"<<(a/b)<<endl;
        break ;
        
        default:
        cout<<"error! operator is not correct"<<endl;
        break;
    }
}