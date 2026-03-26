#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int k){
   int s=0;
   int e=size-1;
// int mid=s+(e-s)/2;

   while(s<=e){
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
      return mid;
    }else if(arr[mid]>k){
        e=mid-1;
    }else{
        s=mid+1;
    }
    // mid=s+(e-s)/2;
   }
   return -1;
}
int main(){
    int arrEven[6]={1,2,3,4,5,6};
    int arrOdd[5]={1,2,3,4,5};
    int ans1=binarySearch(arrEven,6,2);
    int ans2=binarySearch(arrEven,5,5);
    cout<<"even array: "<<ans1<<" odd array: "<<ans2;
  return 0;
}