#include<iostream>
using namespace std;
int main (){
    int n;
    int age;
    char alphabet;
     cout<<"enter the number of array ";
     cin>>n;
     int arr[n];
     cout<<"enter numbers in that array ";
     for(int i=0;i<n;i++){
         cin >>arr[i];
     }
     for(int j=n-1; j>=0;j--){
         cout<<arr[j]<<endl;
     }

}