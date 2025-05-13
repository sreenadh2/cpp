#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"enter a number ";
    cin>>num;
    for(int i=1;i<num;i++){
        if(num%i==0){
           sum+=i;
        }
    }
    if(sum==num){
       cout<<"the entered number is a perfect number ";
   }
    else{
       cout<<"entered number is not a perfect number";
    }
}