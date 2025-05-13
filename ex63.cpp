#include<iostream>
using namespace std;
int main(){
    int num;
    int t=0;
    int i=0;
    int j=0;
    cout<<"enter a number ";
    cin>>num;
    i=num;
    while(i>0){
        t=i%10;
        i=i/10;
        j=j*10+t;
    }
       if(j==num){
            cout<<"number is palindrom ";
        }
        else{
            cout<<"number is not a palindrom ";
        }
}