#include<iostream>
using namespace std;
class employee{
    public :
    employee()
    {
        cout<<"condtructor"<<endl;
    }
    ~employee()
    {
        cout<<"dustructor"<<endl;
    }
};
int main(){
    employee e1;
    employee e2;
    cout<<"welcome to the c++ progarmming"<<endl;
}