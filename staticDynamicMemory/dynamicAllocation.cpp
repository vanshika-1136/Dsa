// 3 april in spiral notebook purple clr cover
//2D ARRAY
#include<iostream>
using namespace std;
int main(){
int row;
cin>>row;
int col;
cin>>col;

int **arr=new int*[row];
 
//make each pointer to points to array
for(int i=0;i<row;i++){
    arr[i]=new int[col];
}

//input
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"enter:";
        cin>>arr[i][j];
    }
}
cout<<endl;

//output
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//delete
for(int i=0;i<col;i++){
    delete [] arr[i];
}
delete []arr;
return 0;
}

// SAME ROWS AND COL
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int **arr=new int*[n];
 
// //make each pointer to points to array
// for(int i=0;i<n;i++){
//     arr[i]=new int[n];
// }

// //input
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<"enter:";
//         cin>>arr[i][j];
//     }
// }
// cout<<endl;

// //output
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// //delete
// for(int i=0;i<n;i++){
//     delete [] arr[i];
// }
// delete []arr;
// }