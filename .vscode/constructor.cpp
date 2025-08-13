#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int years;

    car(){
        brand="toyota";
        model="urban cruser";
        years=2026;
    }
};
int main(){
    car new_one;
    cout<<"brand: "<<new_one.brand<<endl;
    cout<<"model:  "<<new_one.model<<endl;
    cout<<"yraes:  "<<new_one.years<<endl;


}