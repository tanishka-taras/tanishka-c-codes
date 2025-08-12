#include<iostream>
using namespace std;
class disha
{
    public:
    string course;
    int duration;

    void displayinfo(){
        cout<<"name of the course:"<<course<<endl;
        cout<<"time duration:"<<duration<< "month"<<endl;
    }
};
int main(){
    disha d1;
    d1.course ="c++";
    d1.duration =1;
    d1.displayinfo();

}