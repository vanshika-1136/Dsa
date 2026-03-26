// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         char a='A'+i;
//         for(int j=0;j<n;j++){
//             cout<<a<<" "; 
//             a=a+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// A B C 
// B C D
// C D E

//i=>for rows if print i then ek row m same values
//j=>for columns if print j then ek row m alg alg values



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         char a='A'+i-1;
//         for(int j=0;j<i;j++){
//             cout<<a<<" "; 
//             a=a+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:3
// A 
// B C
// C D E


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=n;i>=0;i--){
//     // for(int i=1;i<=n;i--){
//         char a='A'+ i;
//         for(int j=n;j>i;j--){
//         // for(int j=0;j<i;j++){
//             cout<<a<<" "; 
//             a=a+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:4
// D
// C D
// B C D
// A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
      
//         for(int j=1;j<=n-i;j++){

//           cout<<" ";
//         }
//         for(int z =n-i+1;z<n;z++){
//             cout<<"*";
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }
//   *
//  **
// ***

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=0;i<n;i++){
      
//         for(int j=1;j<=n-i;j++){

//           cout<<"* ";
//         }

        
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:4
// * * * * 
// * * *
// * *
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=0;i<n;i++){
      
//         for(int j=1;j<=n-i;j++){

//           cout<<i+1;
//         }

        
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:4
// 1111
// 222
// 33
// 4


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int z=0;z<i;z++){
//           cout<<" ";
//         }
//         for(int j=i;j<n;j++){
//         cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:4
// 1111
//  222
//   33
//    4


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int z=0;z<i;z++){
//           cout<<" ";
//         }
//         for(int j=i;j<n;j++){
//         cout<<j+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:4
// 1234
//  234
//   34
//    4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int z=0;z<n-i-1;z++){
//           cout<<" ";
//         }
//         for(int j=n-i-1;j<n;j++){
//         cout<<i+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:4
//    1
//   22
//  333
// 4444

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int a=1;
//     for(int i=0;i<n;i++){
//         for(int z=0;z<n-i-1;z++){
//           cout<<" ";
//         }
//         for(int j=n-i-1;j<n;j++){
//         cout<<a;
//         a=a+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter n:4
//    1
//   23
//  456
// 78910

// #include <iostream>
// using namespace std;
// void star(int n){
//     for(int j=0;j<n;j++){
//         for(int i =n;i>j;i--){
//         cout<<n-i+1<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         star(n);
//     }
    
//     return 0;
// }
// // 12345
// // 1234
// // 123
// // 12
// // 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        
        for(int z=1;z<=n-i;z++){
          cout<<" ";
        }
        for(int k=1;k<=i;k++){
          cout<<k;
        }
        for(int k=i-1;k>=1;k--){
          cout<<k;
        }
    
        cout<<endl;
    }
    return 0;
}
// enter n:4
//    1
//   121
//  12321
// 1234321

// #include <iostream>
// using namespace std;
// void star(int n){
//     for(int i =0;i<n;i++){
//         for(int j=1;j<=i+1;j++){
//         cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin>>n;
//         star(n);
//     }
    
//     return 0;
// }
//OUTPUT
// t=5 
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5