#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"enter the number";
    cin>>num;
    while(i=1){
    cout<<"multiplication table of"<<num<<endl;
    while(i<=10){
    cout<<num<<"*"<<i<<"="<<num*i<<endl;
    i++;
    }
    cout<<endl;
    num++;
    }
}
    