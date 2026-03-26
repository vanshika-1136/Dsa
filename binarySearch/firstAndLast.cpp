//First and last occurence of element
#include<iostream>
using namespace std;
int firstOccurence(int nums[],int n,int k){
   int s=0;
   int e=n-1;
   int ans=-1;
   while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]==k){
        ans=mid;
        e=mid-1;
    }else if(nums[mid]>k){
        e=mid-1;
    }else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
   }
return ans;
}

int lastOccurence(int nums[],int n,int k){
   int s=0;
   int e=n-1;
   int ans=-1;
   while(s<=e){
    int mid=s+(e-s)/2;
    if(nums[mid]==k){
        ans=mid;
        s=mid+1;
    }else if(nums[mid]>k){
        e=mid-1;
    }else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
   }
return ans;
}
int main(){
    int arr[11]={1,4,4,4,4,4,4,4,7,8,9};
    cout<<"first occurence of 4 is "<<firstOccurence(arr,11,4)<<" last occurence of 4 is "<<lastOccurence(arr,11,4);
    return 0;
}