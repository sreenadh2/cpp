#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int a=0;
    int sum=0;
    int t=0;
    int i =0;
    int h=0;
    cout<<"enter a number ";
    cin>>n;
    int c=n;
    while(c>0){
        t=c%10;
        c=c/10;
        i++;
    }
    int d=n;
    while(n>0){
        h=n%10;
        n=n/10;
        a= pow (h,i);
        sum+=a;
    }
    cout<<sum<<endl;
    if(d==sum){
        cout<<"armstrong";
    }
    else {
        cout<<"not an armstorng ";
    }
}