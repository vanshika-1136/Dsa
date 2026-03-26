//pivot ele in rotated array
// ARR={7,8,1,2,3}
//PIVOT=1
#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
          s=mid+1; // krte krte hum vaha aa jayenge jaha ye equation valid nhi hogi or vhi hoga unrotated part of array ,UNROTATED PART K FIRST ELEMENT HI PIVOT HAI
        }else{
            e=mid;
        }
    }
    return s;
}
int main(){
  int arr[5]={7,8,1,2,3};
  int ans=getPivot(arr,5);
  cout<<ans;
  return 0;
}