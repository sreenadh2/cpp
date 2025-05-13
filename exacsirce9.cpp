#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"ENTER A NUMBER:";
    cin>>number;
    if(number<0){
        cout<<"NUMBER IS POSITIVE";
    }
    else if(number>0){
        cout<<"NUMBER IS NEGATIVE";
    }
    else  {
        cout<<"NUMBER IS ZERO";
    }
    return 0;
}