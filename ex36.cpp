#include<iostream>
using namespace std;
int main(){
    string x;
    int y;
    cout<<"enter your name :";
    cin>>x;
    cout<<"enter your password :";
    cin>>y;
    if(x=="admin" && y==1234){
        cout<<"LOGIN SUCCESSFUL";
    }
    else{
        cout<<"invalid credential";
    }
}