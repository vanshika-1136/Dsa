//min max element in array
#include<iostream>
// #include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE: ";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element of array: "<<endl;;
        cin>>arr[i];
        // cout<<endl;
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        // cout<<arr[i]<<endl;
    }
    cout<<sum;
}