//reverese an array after index m
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the array:";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int m;
    cout<<"enter the m :";
    cin>>m;
    int s=n-1;
    for(int i=m+1;i<s;i++){
        swap(arr[i],arr[s]);
        s--;
    }
    cout<<" array reversed after m :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}