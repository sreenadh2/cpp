#include <iostream>
using namespace std;
int main(){
    int n;
    int t;
    int l;
    cout<<"enter a number ";
    cin>>n;
    while(n>0){
        t=n%10;
        n=n/10;
cout<<t;
    }
}