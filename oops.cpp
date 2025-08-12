#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int age;
    
    void displayinfo() {
        cout<<"enter name:"<<name<<endl;
        cout<<"enter age:"<<age<<endl;

    }
};
int main(){
    employee e1;
    e1.name="samaeer";
    e1.age=21;
    e1.displayinfo();
}