#include<iostream>
using namespace std;
class book{
    private:
    string title;
    string author;
    float price;

    public:
    book(string,string,float){
        title ="the holy man";
        author ="shakesphere";
        price =400;

        cout<<"constructor with title,author,price,"<<endl;
    }
};
int main(){
}