#include<iostream>
using namespace std;
int main(){
    int num;
    int a=0;
    int b=1;
    int t=0;
    cout<<"enter the number ";
    cin>>num;
    cout<<a<<" ";
        while(b<=num){
            cout<<b<<" ";
            t=a+b;
            a=b;
            b=t;
        
        }
}