#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter a number ";
    cin>>n;
    for(int i=1;i<=n;i++){
    sum=sum+i;
    }
    cout<<sum;
}