#include<iostream>
using namespace std;
class add{
    public:
    int x=10;
    int y=20;
    void sum(){
    cout<<"the sum of"<<x<<y<< "is"<< x+y<<endl;
    }
};
class sub{
    public:
    int x=30;
    int y=20;
    void subtraction(){
        cout<<"the sub of"<<x<<y<< "is"<< x-y<<endl;
    }
};
class mul{
    public:
    int x=10;
    int y=40;
    void multiplication(){
        cout<<"the mul of"<<x<<y<< "is"<< x*y<<endl;
    }
};
class div{
    public:
    int x=40;
    int y=20;
    void division(){
        cout<<"the div of"<<x<<y<< "is"<< x/y<<endl;
    }
};
class derived:public add,public sub,public mul,public div
{
    public:
    int x=50;
    int y=20;
    void mod(){
        cout<<"the modulas of"<<x<<y<< "is"<< x%y<<endl;
    }
};
int main()
{
    derived dr;
    dr.mod();
     dr.sum();
    dr.division();
    dr.multiplication();
    dr.subtraction();
}