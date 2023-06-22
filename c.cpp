#include<iostream>

#include<string.h>

using namespace std;

void func(string username, int password){

    string user;
    int passs;
    

    if(user!=username && password!=passs){
        cout<<"You are in your account"<<endl;

    }
    else{
        cout<<"\n\tSorry your username password is incorrect\n"<<endl;
    }

    

}

int main(){

    string username="Anjan";
    int password='123';

    
    string name;
    int pass;

    cout<<"Enter your login username"<<endl;
    cin>>name;


    cout<<"Enter your login password"<<endl;
    cin>>pass;

    func(name,pass);

    return 1;

}