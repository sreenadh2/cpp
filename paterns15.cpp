#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows you want ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        char ch='A'+i-1;
        for(int j=1;j<=(rows*2)-1;j++){
            if(j==rows+i-1||j==rows-i+1||i==rows){
                cout<<ch;
            }
            else{
                cout<<" ";
            }
        }
    cout<<"\n";
    }
}