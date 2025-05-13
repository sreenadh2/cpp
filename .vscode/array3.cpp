#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of array you want ";
    cin>>n;
    int arr[n];
    cout<<"enter number of elements in a array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>largest){
            largest=arr[j];
        }
    }
    cout<<"largest of the number is "<<largest;
}