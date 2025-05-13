#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {6,7,8}};
    for(int j=0;j<3;j++){
        int colsum=0;
        for(int i=0;i<3;i++){
            colsum+=arr[i][j];            
        }
        cout<<"sum of colums are "<<j+1<<" : "<<colsum<<endl;
    }
}