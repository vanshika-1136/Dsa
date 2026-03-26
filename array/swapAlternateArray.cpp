#include<iostream>
using namespace std;
//#include <algorithm>
void reverseAlternateArray(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=6;
    int n2=5;
    int arr[6]={1,5,6,3,7,9};
    int arr2[5]={3,6,5,4,8};
    reverseAlternateArray(arr,n);
    reverseAlternateArray(arr2,n2);  
    printArray(arr,n);
    cout<<endl;
    printArray(arr2,n2);
}