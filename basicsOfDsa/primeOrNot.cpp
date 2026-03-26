#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int number=2;
    if(n<=1){
      cout<<"not a prime";
      return 0;  
    }

    // while(number<n){
    //   if(n%number==0){
    //     cout<<"not a prime";
    //     break; //return 0; 
    //   }
    //   else{
    //     number=number+1;
    //   }
    // }
    // if(number==n){
    // cout<<n<<" is a prime no.";
    // }
   
    bool isPrime=1;
    while(number<n){
        if(n%number==0){
            cout<<"not a prime"<<endl;
            isPrime=0;
            break;
        }
        // else{
        //    cout<<n<<" is a prime no."<<endl; 
        //    break; //WRONG KYUNKI PEHLE NUMBER S HI AGR VO MULTIPLY NI HUA TO PRIME BTA DEGA
        // }
        number=number+1;
    }
    if(isPrime==1){
        cout<<"prime no. ";
    }
    return 0;
}