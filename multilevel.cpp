#include<iostream>
using namespace std;
class appliance {
    public:
    void displayinfo(){
        cout<<"discount on appliance "<<endl;
    }
};
class machine:public appliance{
    public:
    void washcloth(){
        cout<<"washing machine"<<endl;
    } 
};
class smarttv:public machine{
    public:
    void entertainment (){
        cout<<"enjoy movies"<<endl;
    }
};
int main() {  //Main Function  
    smarttv st ;  
    st.displayinfo();     
    st. washcloth();     
    st. entertainment(); 
    return 0;    

}