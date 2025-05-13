#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows you want ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j==(rows+1)/2||i==(rows+1)/2){
                cout<<"+";
            }
            else{
                cout<<" ";
            }
        }
    cout<<"\n";
    }
}