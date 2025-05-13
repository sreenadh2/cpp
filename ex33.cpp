#include<iostream>
using namespace std;
int main(){
    int x;
    bool m= true;
    cout<<"enter the number ";
    cin>>x;
    if(x==1){
        x=true;
    }
    else{
        for(int i=2;i<x;i++){
            if(x%i==0){
                m=false;
                break;
            }
        }
    }
    if(m){
        cout<<"THE NUMBER IS PRIME";
    }
    else{
        cout<<"THE NUMBER IS NOT PRIME";
    }
}