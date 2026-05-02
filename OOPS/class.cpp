#include<iostream>
#include<string.h>
using namespace std;
class Bad {
    char c;
    double d;
    int i;
};
class good{
    double d;
    char c;
    int i;
};
class Hero{
    int health;
    char level;
    char *a;
    char* name;
    static int timeToComplete;
   public:
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }


    void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    // Hero() {
    //     cout << "Simple constructor called" << endl;
    //     // name = new char[100];
    // }

    void setName(char name[]) {
    delete[] this->name;  // free old memory
    this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    //Paramerterised Constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name); // strpy also copy '\0'
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
};

int Hero::timeToComplete=5;//initialization
int main(){
    cout<<sizeof(Bad)<<endl;//24
    cout<<sizeof(good)<<endl;//16
    
//    Hero ramesh;
//    ramesh.getHealth();
    

}