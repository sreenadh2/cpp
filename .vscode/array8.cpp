#include<iostream>
using namespace std;
int main(){
    int rowsum,i,j;
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    for( i=0;i<3;i++){
        rowsum=0;
        for( j=0;j<3;j++){
            rowsum = rowsum + arr[i][j];
            
            
        }
        cout<<"sum of rows "<< i+1 <<":"<<rowsum<<endl;
    }
}