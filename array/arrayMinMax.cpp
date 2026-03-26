#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    cout<<"Enter size: ";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       maxi= max(maxi,arr[i]);
       mini= min(mini,arr[i]);
    }
    cout<<"max: "<<maxi<<" min: "<<mini;
}