#include<iostream>
using namespace std;
int main(){
    bool n;
    cout<<"are you 18 years old and having a valid licence (if it is yes enter 1 and 0 for no)";
    cin>>n;
    if(n){
        cout<<"eligible to drive";
    }
    else{
        cout<<"not eligible to drive";
    
    }
}