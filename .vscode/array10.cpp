#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int i,j;
    cout<<"enter the elements in that array ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int value;
    bool found =false;
    cout<<"enter the value ";
    cin>>value;
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            if(arr[i][j]==value){
                found=true;
                break;
            }
        }
        if (found==true){
            break;
        }
    }
    if(found==true){
        cout<<"element "<<value <<" found";
    }
    else{
        cout<<"not found ";
    }
}