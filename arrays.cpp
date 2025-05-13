#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER OF ELEMENTS"<<endl;
    cin>>n;
    int arry[n];
    cout<<"ENTER ELEMENTS"<<endl;
    for(int i=0;i<n;i++){
    cin>>arry[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arry[i];
    }
    cout<<"sum of elements are"<<sum;
}