#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the year ";
    cin>>n;
    if(n%4==0||n%400==0){
        cout<<"leap year";
    }
    else if(n%100==0){
        cout<<"not a leap year";
    }
    else{
        cout<<"not a leap year ";
    }
}