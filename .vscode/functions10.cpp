#include<iostream>
using namespace std;
bool isprime(int n){
    bool prime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    bool result =isprime(num);
    if(result){
        cout<<"number is prime ";
    }
    else {
        cout<<"number is not prime ";
    }
}