#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    if((n%7==0)||n<=50){
        cout<<"number is valid";
    }
    else{
        cout<<"number is not valid";
    }
}