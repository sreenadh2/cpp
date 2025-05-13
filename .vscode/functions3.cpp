#include<iostream>
using namespace std;
bool iseven(int num){
    return num%2==0;
} 
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    if (iseven (x))
    cout<<"even "<<endl;
    else
    cout<<"odd "<<endl;
    return 0;
}