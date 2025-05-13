#include<iostream>
using namespace std;
int main(){
    int num;
    bool isPrime = true;

    cout<<"ENTER A NUMBER ";
    cin>>num;

    if(num ==1){
        isPrime = false;
    }

    else{
    for( int i = 2; i< num;i++){
        if(num% i ==0){
            cout << "Not a prime";

            break;


        }
    }
}

    if(isPrime ){
        cout <<"PRIME NUMBER";
    }
    else{
        cout<<"NOT A PRIME";
    }
}