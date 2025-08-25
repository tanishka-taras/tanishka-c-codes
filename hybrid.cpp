#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
    cout<<"the vehicle is innova"<<endl;
    }
};
class car: public vehicle{
    public:
    car(){
        cout<<"the car has 4 wheels"<<endl;;
    }
};
class racing{
    public:
    racing(){
        cout<<"i like racing"<<endl;
    }
};
class fortuner:public car,public racing{
    public:
    fortuner(){
        cout<<"i like this vehicle"<<endl;
    }
};
int main(){
    fortuner f;
}