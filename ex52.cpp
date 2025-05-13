#include<iostream>
using namespace std;
int main (){
    bool p= true;
    int n;
    cout<<"enter a number ";
    cin>>n;
    if(n==1){
         p=true;
    }
    else{
    for(int i=2;i<=n;i++){
        if(n%i==0){
             p= false;
            break;
    }
}
    }
    if(p){
        cout<<"prime ";
    }
    else{
        cout<<"not prime";
    }

}