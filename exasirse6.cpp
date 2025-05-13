#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"ENTER ANY TWO NUMBERS:";
    cin>>a;
    cin>>b;
    int sum= a+b;
    cout<<"SUM= "<<sum<<endl;
    int difference= a-b;
    cout<<"DIFFERENCE= "<<difference<<endl;
    int product= a*b;
    cout<<"PRODUCT= "<<product<<endl;
    int quotient= a/b;
    cout<<"QUOTIENT= "<<quotient<<endl;
    int reminder= a%b;
    cout<<"REMINDER= "<<reminder<<endl;
    return 0;
}