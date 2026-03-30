#include<iostream>
#include<vector>
#include<string>
using namespace std;
//if we make a function and pass 2D arry in it then we must add the col value in it to process
int main(){
    int row=3;
    int col=2;
    int arr[row]={0};
    int a[row][col]={
        {1,2},{3,4},{5,6}
    };
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
        arr[i]=arr[i]+a[i][j];
    }
    int largestRowSum=0;
    for(int i=0;i<row;i++){
        cout<<arr[i]<<" ";
        largestRowSum=max(largestRowSum,arr[i]);
        
    }
    cout<<"largestRowSum: "<<largestRowSum<<" ";
    
    
}