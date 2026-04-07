//array is sorted or not
#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        isSorted(arr +1,size-1);
    }
}
int main(){
    int arr[6]={1,2,1,3,4,5};
    int size=6;
    bool ans=isSorted(arr,size);
    cout<<ans;
    return 0;
}