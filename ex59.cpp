#include<iostream>
using namespace std;
int main(){
    int num;
    int n;
    int t=0;
    int l=0;
    int sum = 0;
    cout<<"enter a number ";
    cin>>num;
    num =n;
    while(n>0){
         t=n%10;
         n=n/10;
         l=t*t*t;
         sum += l;

         
         
    }

    

    if (sum == num){
        cout <<"Entered number is armstrong";
    }
    else{
        cout <<"Not armstrong";
    }
}