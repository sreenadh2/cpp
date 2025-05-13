#include<iostream>
using namespace std;
void divicible(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int num;
    cout<<"enter a number ";
    cin>>num;
    divicible(num);

}