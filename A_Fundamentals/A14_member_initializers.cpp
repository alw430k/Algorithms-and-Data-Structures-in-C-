#include <iostream>
using namespace std;


/*
Running the following class causes an error
one of its member variables is a constant, which cannot be assigned a value after declaration

class MyClass {
    public:
        MyClass(int a, int b){
            regVar = a;
            constVar = b;
        }
    private:
        int regVar;
        const int constVar;
}

Therefore, we use the member initialization list

class MyClass {
    public:
        MyClass(int a, int b) : regVar(a), constVar(b){ // member initialization list -> constructor(type var) : variable(value) {} 
        }
    private:
        int regVar;
        const int constVar;
};
*/

// header portion
class MyClass {
    public:
        MyClass(int a, int b);
    private:
        int regVar;
        const int constVar;
};

MyClass::MyClass(int a, int b) : regVar(a), constVar(b){
    cout << regVar << endl;
    cout << constVar << endl;
}

// main portion
int main(){
    MyClass obj(1, 2);
    
}