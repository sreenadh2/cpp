#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"ENTER YOUR MARK ";
    cin>>mark;
    if(mark<50){
        cout<<"f";
    }
    else if(mark>=50&&mark<=74){
        cout<<"c";
    }
    else if(mark>=75&&mark<=89){
        cout<<"b";
    }
    else if(mark>=90&&mark<=100){
        cout<<"a";
    }
    else{
        cout<<"error";
    }
}