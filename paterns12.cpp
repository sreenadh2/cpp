#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=(rows*2)-1;j++){
            if(j==rows-i+1||j==rows+i-1||i==rows){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}