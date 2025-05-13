#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"ENTER ENY THREE NUMBER;";
    cin>>a>>b>>c;
    if(a>=b&&a>=c){
        cout<<a;
    }
    if(b>=a&&b>=c){
        cout<<b;
    }
    
    
    else{
        cout<<c;
    }
}