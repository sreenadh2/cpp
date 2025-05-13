#include<iostream>
using namespace std;
int main(){
    int num;
    int a=0;
    int b=1;
    cout<<"enter a number ";
    cin>>num;
    cout<<a<<" ";
    for(int i=0;a<=num;){
        cout<<b<<" ";
        i=a+b;
        a=b;
        b=i;
    }
}