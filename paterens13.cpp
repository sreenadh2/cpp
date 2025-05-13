#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number of rows ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==3){
                cout<<" # ";
        }
        else{
            cout<<" * ";
        }
    }
    cout<<"\n";
}
}