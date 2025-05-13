#include<iostream>
using namespace std;
int main(){
    bool isprime=true;
    int num;
    cout<<"enter a number ";
    cin>>num;
    if(num==1){
        isprime=true;
    }
    else{
    for(int i=2;i<num;i++){
        if(num%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout<<"entered number is prime ";
    }
    else {
        cout<<"entered number is not prime ";
    }
}
}