#include<iostream>
using namespace std;
int main(){
    int rows;
    int num=0;
    cout<<"enter number of rows you want ";
    cin>>rows;
    for(int i=1;i<=(rows+1)/2;i++){
        num=i-1;
        for(int j=1;j<=rows;j++){
            if(j<=((rows+1)/2)+i-1&&j>=((rows+1)/2)-i+1){
                j<=(rows+1)/2 ? num++: num--;
                cout<<num;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}