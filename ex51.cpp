#include <iostream>
using namespace std;
int main(){
    int n;
    int t;
    int l;
    cout<<"enter a number ";
    cin>>n;
    for(t = 0,l = 0;n>0;){
        t=n%10;
        n=n/10;
        if(t>l){
            l=t;
        }
    }
    cout<<l;
}