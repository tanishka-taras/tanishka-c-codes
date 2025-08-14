#include<iostream>
using namespace std;
class employee{
    public:
    int emp_id;
    string emp_name;
    void insert(int i,string n){
        emp_id=i;
        emp_name=n;
    }
    void displayinfo(){
        cout<<emp_id<<emp_name<<endl;
    }
};
int main(void) 
{    
    employee emp1;
    employee emp2;
    
    emp1.insert(101, "John");      
    emp2.insert(102, "Alice");      
    emp1.displayinfo();      
    emp2.displayinfo();    
    return 0;    
}  