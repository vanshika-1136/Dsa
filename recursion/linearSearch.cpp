#include<iostream>
using namespace std;
int search(int *arr,int size,int k){
     if(size==0){
        return -1;
     }
     if(*arr==k){
        return 1;
     }
     return search(arr+1,size-1,k);
}
int main(){
int arr[5]={1,2,3,4,5};
int size=5;
int ans=search(arr,size,8);
cout<<ans;
return 0;
}