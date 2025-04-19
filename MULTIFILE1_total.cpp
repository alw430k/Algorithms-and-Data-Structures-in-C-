// When putting header, class and main in the same file
#include <iostream>
// #include "MULTIFILE1_classes.cpp" // needs source file, not header file
//#include "MULTIFILE1_classes.h"
using namespace std;

// header portion
class MyClass
{
    public:
        MyClass(); //constructor
        void MyPrint(); // member function (method) (needs return type)
        ~MyClass(); //destructor
    protected:
    private:
};


// class portion
MyClass::MyClass() // the double colon :: is the scope resolution operator, and used for constructor definition
{
    //ctor
    cout << "MyClass Constructor Called!" << endl;
}
void MyClass::MyPrint(){ // member function (method) (needs return type)
    cout << "Hello!" << endl;
}
MyClass::~MyClass() // destructor
{
    //dtor
    cout << "MyClass Destructor Called!" << endl;
}


// main portion
int main(){
    MyClass obj;
    obj.MyPrint();

    // pointers can be used to access object members
    MyClass *ptr = &obj; // review: define pointer with * operator, assign object's memory object with & operator 

    // Selection Operator: arrow member selection operator is used to access an object's members with a pointer
    // when working with object, use . dot operator; when working with pointer to object, use the -> arrow member selection operator
    ptr -> MyPrint();
}