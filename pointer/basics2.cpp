#include<iostream>
using namespace std;

void swap(char *p ,char *q){ //pass bt value -->kch ni krne vla
    char *t=p;
    p=q;
    q=t;
}
void swap2(char **x, char **y) { //correct
    char *t = *x;
    *x = *y;
    *y = t;
} //use  swap(&x, &y)

void swap3(char *&x, char *&y) {
    char *t = x;
    x = y;
    y = t;
}//BEST
int main()
{
   char *x = "ninjasquiz";
   char *y = "codingninjas";
   char *t;
   swap(x, y);
   cout<<x << " "<<y; //ninjasquiz codingninjas
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;//codingninjas ninjasquiz
   return 0;
}
