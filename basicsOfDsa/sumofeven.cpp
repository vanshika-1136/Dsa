#include <iostream>
using namespace std;
int main(){
 int n;
 cout<<"enter upper limit of number: ";
 cin>>n;
 int number =0,sum=0;
 while(number<n){
    sum=sum+number;
    number=number+2;
 }
 cout<<sum;
}