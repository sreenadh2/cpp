#include<iostream>
using namespace std;
int main(){
    int n=5;
    int t=9;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=t;j++){
            if(j>=6-i&&j<=4+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}