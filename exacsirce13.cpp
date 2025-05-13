#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"ENTER YOUR AGE: ";
    cin>>age;
    if(age<=12){
        cout<<"CHILD";
    }
    else if(age<=19){
        cout<<"TEEN";
    }
    else{
        cout<<"ADULT";
    }
}