#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"printing count from 1 to n "<<endl;
    int i=1;
    for( ; ; ){
      if(i<=n){
        // cout<<i<<endl;
      }
      else{
        break;
      }
      i=i+1;
    }

    for(int a=0,b=1;a>=0 && b>=1;a--,b--){
        // cout<<a<<" "<<b<<endl;
    }
    // for(int i=0;i<=5;i--){
    //     cout<<i<<" ";
    //     i++;
    // }
    //     for(int i=0;i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }
        for(int i=0;i<=15;i+=2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
//0 3 5 7 9 11 13 15


    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
    }
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5
    for(int i=0;i<5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    } //SAME AS ABOVE AS I+J NEVER EQUALS TO 10 ; SO NEVER BREAK HAPPENS
}