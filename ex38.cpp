#include<iostream>
using namespace std;
int main(){
    int num;
    int i;
    cout<<"enter the balance amount in your account ";
    cin>>num;
    cout<<"enter withdrawal amount ";
    cin>>i;
    if(i<=num){
        cout<<"transaction succsussful";
    }
    else if(i>num){
        cout<<"insufficent balance";
    }
    else{
        cout<<"error";
    }
}