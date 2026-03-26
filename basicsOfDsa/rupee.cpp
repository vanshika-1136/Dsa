//100,500,20,1 rupee given , for n how many notes of each make tha n rupees
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rupees: ";
    cin>>n;
    cout<<"NUMBER OF 100 RUPEES NOTES: "<<n/100<<endl;
    n=n%100;
    cout<<"NUMBER OF 50 RUPEES NOTES: "<<n/50<<endl;
    n=n%50;
    cout<<"NUMBER OF 100 RUPEES NOTES: "<<n/20<<endl;
    n=n%20;
    cout<<"NUMBER OF 100 RUPEES NOTES: "<<n<<endl;
}