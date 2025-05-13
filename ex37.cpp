#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"VALUE OF THREE CONS OF TRIANGLE ARE A,B,C."<<endl;
    cout<<"first enter the length of A and B ";
    cin>>a;
    cout<<"enter the second value B and C ";
    cin>>b;
    cout<<"enter the last one C and A ";
    cin>>c;
    if(a==b&&c==a&&b==c){
        cout<<"equillateral";
    }
    else if (a==b||a==c||b==c){
        cout<<"isoscelses";
    }
    else {
        cout<<"scalene";
    }
}