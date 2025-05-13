#include<iostream>
using namespace std;
int main(){
    float a;
    float b;
    char operater;
    cout<<"ENTER FIRST NUMBER: ";
    cin>>a;
    cout<<"ENTER SECOND NUMBER: ";
    cin>>b;
    cout<<"ENTER OPERATER: ";
    cin>>operater;
    switch(operater){
        case ('+'):
        cout<<"sum= "<<a+b;
        break;
        case('-'):
        cout<<"difference= "<<a-b;
        break;
        case('*'):
        cout<<"product= "<<a*b;
        break;
        case('/'):
        cout<<"division= "<<a/b;
        break;

    }
    return 0;
}