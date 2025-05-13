#include<iostream>
using namespace std;
int main(){
    int n;
    int pro;
    cout<<"enter the number ";
    cin>>n;
    for(int i=1;i<=100;i++){
        pro=i*n;
    cout<<n<<"*"<<i<<"="<<pro<<endl;
}
}