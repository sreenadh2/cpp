#include<iostream>
using namespace std;
int main(){
    float a;
    float b;
    char operater;
    cout<<"enter two number: ";
    cin>>a>>b;
    cout<<"enter the operation";
    cin>>operater;
    if(operater == '+'){
        cout<<"sum= " <<a+b;
    }
    else if(operater == '-'){
        cout<<"difference= " <<a-b;
    }
    else if(operater == '-'){
        cout<<"product= " <<a*b;
    }
    else if(operater == '/'){
        cout<<"division= " <<a/b;
    }
    else{
        cout<<"error";
    }
    return 0;
}
// this is demo