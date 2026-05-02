#include<iostream>
#include<string.h>
using namespace std;

class parent{
  private:
    int privateVar;

  protected:
    int protectedVar;

  public:
    int publicVar;
    
    parent(){
        privateVar=10;
        protectedVar = 20;
        publicVar = 30;
    }

    void showPrivate(){
        cout<<"private var = "<<privateVar<<endl;
    }
};
class child1 :public parent{
  public: 
  void display(){
    //cout << privateVar;
    cout << "Protected = " << protectedVar << endl; // ✅
    cout << "Public = " << publicVar << endl; 
  }
};
class child2: protected parent{
public:
    void display() {
        cout << "Protected = " << protectedVar << endl; // ✅
        cout << "Public = " << publicVar << endl;       // ✅ (becomes protected)
    }  void getName(){

  } 
};
class child3: private parent{
    public:
    void display() {
        cout << "Protected = " << protectedVar << endl; // ✅
        cout << "Public = " << publicVar << endl;       // ✅ (becomes private)
    }
};
int main(){
    child1 x;
    cout<<x.publicVar;
    cout<<endl;
    x.display();
    x.showPrivate();

    child2 y;
    // y.publicVar;
    y.display();  
    
    
    child3 z; // error in all
    // z.publicVar;
    z.display();
    
}