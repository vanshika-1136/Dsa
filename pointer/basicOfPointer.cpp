#include<iostream>
using namespace std;
int main(){
    int num=5;
    int *p=&num;
    cout<<p<<" ";
    int *a=p;
    cout<<a<<" ";
    int b=num;
    b++;
    cout<<num<<" ";
    (*p)++; //increament in num
    cout<<num<<" ";

    //new pointer points to the old pointer
    int *q=p;
    cout<<*q<<" ";
    cout<<q<<" ";
    q=q+1;
    cout<<q<<" ";// +4 -->next location of int

}