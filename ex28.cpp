#include<iostream>
using namespace std;
int main(){
    int userinput;
    cout<< "1. add "<<endl;
    cout<< "2. substraction"<<endl;
    cout<< "3. multiplay "<<endl;
    cout<< "4. division"<<endl;
    cout<< "5. exit"<<endl;
    cin>>userinput;
    if(userinput>5){
        cout<<"error";
    }
    else if(userinput==5){
        cout<<"exit";
    }
    else{
    float a;
    float b;
    cout<<"enter the first number ";
    cin>>a;
    cout<<"enter the secound number ";
    cin>>b;
    switch(userinput){
        case 1:
        cout<<"sum="<< a+b;
        break;
        case 2:
        cout<<"substaction="<< a-b;
        break;
        case 3:
        cout<<"multiplication="<< a*b;
        break;
        case 4:
        cout<<"diviction=" <<a/b;
        break; 
}
}
}