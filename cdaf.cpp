#include<iostream>

using namespace std;

class demo{
    float a, b ,sum;

    public:
        void getdata();
        void displaydata();
        void adddata();

};

void demo::getdata(){
    cout<<"Enter any number "<<endl;
    cin>>a>>b;

}

void demo ::adddata(){
    sum = a*b;
}

void demo ::displaydata(){
    cout<<"Sum is "<<sum<<endl;
}

int main(){
    demo d;

    d.getdata();
    d.adddata();
    d.displaydata();

    return 0;
}