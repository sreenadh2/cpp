#include<iostream>
using namespace std;
void multiplication(int n){
    for(int i=1;i<=10;i++){
        cout << i << " * " <<n <<" ="<<i*n<<endl;
        
    
    
        
    }
    
}
int main(){
    int num;
    cout<<"enter the number ";
    cin>>num;
    multiplication(num);

}