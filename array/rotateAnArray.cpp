#include<iostream>
#include<vector>
using namespace std;

//  void rotate(vector<int>& nums, int k) {
//         int n = nums.size() - 1;
        
//         int temp=0;
//         for (int j = 0; j < k; j++) {
//             int i = n;
//             int temp = nums[i];
//             while (i > 0) {
                
//                 nums[i] = nums[i - 1];
//                 i--;
//             }
//             nums[i]=temp;
//         }
//     }

        void rotate(vector<int>& nums, int k) {
        int n = nums.size() - 1;

        for(int i=0,j=n;i<n/2,j>n/2;i++,j--){
            swap(nums[i],nums[j]);
        }

        for(int i=0,j=k-1;i<k/2,j>k/2;i++,j--){
            swap(nums[i],nums[j]);
        }

        for(int i=k,j=n;i<(n+k)/2,j>(n+k)/2;i++,j--){
            swap(nums[i],nums[j]);
        }
    }

    int main(){
        vector<int>nums={1,2,3,4,5,6};
        rotate(nums,3);

        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        return 0;
    }