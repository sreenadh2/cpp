#include<iostrteam>
using namespace std;
int main(){
    int num;
    bool x= true;
    cout<<"enter a number";
    cin>>num;
    if(num==1){
        x=false;
        break;
    }

    else{
    
    for(int i=2;i<num;i++){
        if{
        (num % i==0)
        x=false;
        break;
        }
    }
}
if(x){
    cout << "prime number";
}

else{
    cout <<"Not a prime";
}
 



}