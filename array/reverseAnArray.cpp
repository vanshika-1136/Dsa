//u can also do it by swapping with start++ and end-- after every swp till start<=end
#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
      int temp=arr[i];
      arr[i]=arr[size-(i+1)];
      arr[size-(i+1)]=temp;
    }    
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={6,9,8,7,10};
    int size=5;
    reverse(arr,size);
    printArray(arr,size);
}