#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number";
    cin>>number;
    if (number %5!=0)
    cout<<"number is not divicible of 5";
    else if(number%5==0)
    cout<<"number is multiple of 5";
    return 0;
}