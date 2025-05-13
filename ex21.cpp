#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"are you 18 years old and having a valid lisence ";
    cin>>a;
    if(a=="yes"){
        cout<<"eligible to drive";
    }
    else if (a=="no"){
        cout<<"not eligible to drive";
    }
    else {
        cout<<"error";
    }
}