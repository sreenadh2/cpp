#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter the units ";
    cin>>i;
    int sum=0;
    if(i<=100){
        sum=i*5;
    cout<<"bill amout is "<<sum;
    }
    else if(i>100&&i<300){
        sum=i*7;
        cout<<"bill amount is "<<sum;
    }
    else if(i>300){
        sum=i*10;
        cout<<"bil amount is "<<sum;
    }
    else {
        cout<<"error";
    }
}