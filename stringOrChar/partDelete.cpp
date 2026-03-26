#include<iostream>
#include<string>
using namespace std;

//USE STRING K OPERATIONS
    string removeOccurrences(string s, string part) {
        int s2 = part.size();
        int j = 0;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == part[j]) {
                i++;
                j++;

                if (j == s2) {
                    s.erase(i - s2, s2);
                    i = 0;
                    j = 0;
                }
            } else if (s[i] != part[j] && j > 0) {
                i = i - s2;
                j = 0;
            } else {

                i++;
            }
        }
        return s;
    }
