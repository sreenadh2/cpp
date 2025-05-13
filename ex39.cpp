#include<iostream>
using namespace std;
int main(){
    int a;
    int i=200;
    cout<<"enter the attentence ";
    cin>>a;
    float sum=(float (a)/i)*100;
    if(sum>=75){
        cout<<"eligible for examination ";
    }
    else{
        cout<<"not eligible for examination ";
    }
}


