#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of array you want ";
    cin>>n;
    int arr[n];
    cout<<"enter elements in that array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int slargest=-1;
    for(int j=1;j<n;j++){
        if(arr[j]>largest){
            slargest=largest;
            largest=arr[j];
        }
        else if (arr[j]>slargest){
            slargest=arr[j];
        }
    }
    cout<<"the secound largest of the array is "<<slargest;
}