#include<iostream>
using namespace std;
class Bad {
    char c;
    double d;
    int i;
};
class good{
    double d;
    char c;
    int i;
};
int main(){
    cout<<sizeof(Bad)<<endl;
    cout<<sizeof(good)<<endl;
}