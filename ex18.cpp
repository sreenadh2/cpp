#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age";
    cin>>age;
    if(age<18||age>60){
        cout<<"you are eligible for discount";

    }
    else{
        cout<<"not eligible";

    }
}