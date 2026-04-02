#include<iostream>
using namespace std;
void increment(int **p){
    (**p)++;
}
int main(){
int num =11;
int *ptr=&num;
increment(&ptr);
cout<<num;//11
}