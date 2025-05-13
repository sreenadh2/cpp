#include<iostream>
using namespace std;
int main(){
    bool find=true;
    int arr[5]={1,2,3,4,5};
    int num;
    cout<<"enter the number you want to find ";
    cin>>num;
    for(int i=0;i<=4;i++){
        if(arr[i]==num){
            find=false;
            break;
        }
    }
    if(find){
        cout<<"the element "<<num<<" is not in the array ";
    }
    else{
        cout<<"the element "<<num <<" is in the array ";
    }
}