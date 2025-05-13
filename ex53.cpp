#include<iostream>
using namespace std;
int main(){
    int n;
    int i=2;
    bool p=true;
    cout<<"enter a number ";
    cin>>n;

    while(i<n){
        
        if(n%i==0){
        p=false;
        break;
        }

    i++;
}
    if(p){
        cout<<"prime ";
    }
    else{
        cout<<"not a prime ";
    }
}

