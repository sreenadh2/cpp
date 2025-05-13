#include<iostream>
using namespace std;
int t,sum =0;
int sumofdigit(int n){
    while(n>0){
        t=n%10;
        n=n/10;
        sum+=t;
    }
    return sum; 
}
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    int result=sumofdigit(num);
    cout<<"sum of digits are "<<result;
}