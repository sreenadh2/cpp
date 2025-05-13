#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"ENTER A NUMBER ";
    cin>>i;
    if((i>= 1 && i <=100) || i <0){
        cout<<"within given limit";
    }
    else {
        cout<<"outside limit";
    }
}