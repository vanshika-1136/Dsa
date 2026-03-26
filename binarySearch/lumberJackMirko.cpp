//ACCEPTED TO SPHER ONLINE
// #include <iostream>
// using namespace std;

// bool possibleSoln(int mid, int arr[], int size, int k) {
//     long long wood = 0;

//     for(int i = 0; i < size; i++) {
//         if(arr[i] > mid) {
//             wood += (arr[i] - mid);
//         }
//     }
//     return wood >= k;
// }

// int lumber(int arr[], int size, int k) {
//     int s = 0;
//     int e = arr[0];

//     // find maximum height
//     for(int i = 1; i < size; i++) {
//         e = max(e, arr[i]);
//     }

//     int answer = -1;

//     while(s <= e) {
//         int mid = s + (e - s) / 2;

//         if(possibleSoln(mid, arr, size, k)) {
//             answer = mid;
//             s = mid + 1;
//         } else {
//             e = mid - 1;
//         }
//     }
//     return answer;
// }

// int main() {
//     int size, k;
//     cin >> size >> k;

//     int* arr = new int[size];
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << lumber(arr, size, k);

//     delete[] arr;
//     return 0;
// }

#include <iostream>
using namespace std;
int possibleSoln(int mid,int arr[],int size,int k){
    int difference=0;
   for(int i=0;i<size;i++){
    if(arr[i]>mid){
        difference=difference+(arr[i]-mid);
    }
   }
   if(difference>=k){
    return true;
   }
   return false;
}
int lumber(int arr[],int size, int k){
   int s=0;
   int ans =arr[0];
   int answer=-1;
   for(int i=1;i<size;i++){
    
    if(ans<arr[i+1]){
        ans=max(ans,arr[i]);
    }
   }
   int e=ans;
   while(s<=e){
    int mid=s+(e-s)/2;
    if(possibleSoln(mid,arr,size,k)){
         answer=mid;
        s=mid+1;
    }else{
        e=mid-1;
    }
   }
   return answer;
}
int main() {
	
	// int arr[] = {20, 15, 10, 17};
    // int size = 4;
    // int k = 7;
    // int arr[]={4,42,40,26,46};
    // int size=5;
    // int k=20;
    int size;
    int k;
    cout<<"Enter size and k: "<<endl;
	cin>>size>>k;
	int arr[size]; //  vector<int> arr(size);
	
    
    cout<<"Enter array element";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	

    cout << lumber(arr, size, k);
    
	

	return 0;
}
