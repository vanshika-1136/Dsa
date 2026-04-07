#include<iostream>
using namespace std;
int binarySearch(int *arr,int s, int e,int key){
    int mid=s+(e-s)/2;
    if(s>e){
      return -1;
    }
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]>key){
    return binarySearch(arr,s,mid-1,key);
    }else{
      return binarySearch(arr,mid+1,e,key);  
    }
    
}
int main(){
    int arr[5]={2,3,4,5,6};
    int size=5;
    int k=8;
    int s=0;
    int e=size-1;
    cout<<binarySearch(arr,s,e,k);

}