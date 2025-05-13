#include<iostream>
using namespace std;
int main(){
    int n;
    int count;
    cout<<"enter a number ";
    cin>>n;
    for(count=0;n>0;){
        n=n/10;
        count++;
}
cout << count;
}