#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of array you want ";
    cin>>n;
    int arr[n];
    cout<<"enter number of element in an array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smallest =arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]<smallest){
            smallest=arr[j];
        }
    }
    cout<<"smallest of array is "<<smallest;
}