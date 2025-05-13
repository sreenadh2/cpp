#include<iostream>
using namespace std;
int main(){
    int num;
    int a=1;
    int b=0;
    int c=0;
    int ans=1;
    cout<<"enter a number ";
    cin>>num;
    cout<<a;
    for(int i=2;i<=num;i++){
        b=a*i;
        cout<<"*"<<b;
        c=a*b;
        ans*=c;
    }
   cout<<" ="<<endl<<"factorial "<<ans;
}