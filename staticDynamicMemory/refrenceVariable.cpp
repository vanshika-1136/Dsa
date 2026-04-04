//pass by value and 
//pass by refrence(&)-->memory same name change 
#include<iostream>
using namespace std;
//pass by value
void update(int n){
    n=n+1;
}
void update2(int &n){
    n=n+1;
}

//return by refrence
int& update3(int n){ //bad practice
    int a=n; //as a is scope specific then ans point to where as after the function it goes where no idea
    int &ans=a;
    return ans;
}

//pointer
int* fun(int n){
    int *ptr=&n; //local var , cant access outside the function , pointer points to this var get lost
    return ptr;
}
int main(){
int n=5;
update(n);
cout<<n<<endl;
update2(n);
cout<<n<<endl;
update3(n);
cout<<n<<endl;
}