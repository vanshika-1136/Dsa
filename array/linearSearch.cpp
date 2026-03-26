#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    
   for(int i=0;i<size;i++){
      if(arr[i]==key){
        return true;
      }
   }
   return false;
}
int main(){
    int arr[10]={1,2,3,4,-5,6,7,-8,9,10};
    cout<<" Enter the element for searching: ";
    int key;
    cin>>key;
    int n=10;
    bool found=search(arr,n,key);
    if(found==1){
      cout<<"Element is present ";
    }
    else{
        cout<<"Element is not present ";
    }
}