#include<iostream>
using namespace std;
int main(){
    int a, b;
    int i;
    int n=1;
    cout<<"ENTER TWO NUMBER ";
    cin>>a>>b;
    for( i=2;i<=a&&b;i++){
        if(a%i==0&&b%i==0){
        n=i;
        }
    }
    cout<<n;
}