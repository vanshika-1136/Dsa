#include<iostream>
#include<stack>//last in , first out
using namespace std;
int main(){
   stack<int>s;
   s.push(9);
   s.push(10);
   s.pop();
   s.top();
   s.size();
   s.empty();//0->false
}