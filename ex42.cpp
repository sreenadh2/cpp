#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<"ENTER A NUMBER ";
    cin>>i;
    if(i>0&&i%2==0){
        cout<<"THE NUMBER IS POSITIVE EVEN ";
    }
    else if (i>0&&i%2==1){
        cout<<"THE NUMBER IS POSITIVE ODD ";
    }
    else if (i<0&&i%2==0){
        cout<<"THE NUMBER IS NEGATIVE EVEN ";
    }
    else if (i<0&&i%2==-1){
        cout<<"THE NUMBER IS NEGATIVE ODD ";
    }
    else {
        cout<<"THE NUMBER IS ZERO";
    }
    return 0;
}