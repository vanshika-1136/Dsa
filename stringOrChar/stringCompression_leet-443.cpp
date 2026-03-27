// Given an array of characters chars, compress it using the following algorithm:

// Begin with an empty string s. For each group of consecutive repeating characters in chars:

// If the group's length is 1, append the character to s.
// Otherwise, append the character followed by the group's length.
// The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

// After you are done modifying the input array, return the new length of the array.

// You must write an algorithm that uses only constant extra space.

// Note: The characters in the array beyond the returned length do not matter and should be ignored.
#include<iostream>
#include<vector>
using namespace std;

//OPTIMIZATION -2 POINTER APPROACH AND TAKE N =input.size() and use n for further calculations
int main(){
    // vector<char>input={'t','h','e',' ','e','y','e','s'};
    vector<char>input={'a','a','b','b','c','c','c'};
    
  
    int i=0;
    int index=0;
    while(i<input.size()){
      char ch=input[i];
      int cnt=0;
    
    while(i<input.size() && input[i]== ch){
    i++;
    cnt++;
    }
    input[index++]=ch;
    if(cnt>1){
        string num =to_string(cnt);
        for(char c: num){
          input[index++]=c;
        }
        
    }
}
    
cout<< index;
}
