#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"ENTER A ANY THREE NUMBER ";
    cin>>a>>b>>c;
    if (a>b&&a>c&&b>c){
        cout<<a <<b <<c;
    }
    else if(a>b&&a>c&&c>b){
        cout<<a <<c <<b;
    }
    else if(b>a&&b>c&&a>c){
        cout<<b <<a <<c;
    }
    else if(b>a&&b>c&&c>a){
        cout<<b <<c <<a;
    }
    else if(c>a&&c>b&&b>a){
        cout<< c << b << a;
    }
    else{
        cout<< c << a << b;
    }
}