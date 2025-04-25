/*
VIRTUAL FUNCTIONS
Want every derived class to have a getValue function
keyword virtual before baseclass function
by defining virtual getValue function in base class,
every derived class call using base pointers will override baseclass getValue function

function declared virtual act as a template, telling that derived class may have its own function implementation

a virtual function's implementation in derived class is called to the actual type of object referred to
regardless of declared type of pointer

Derivedclass object dobj //Actual object type: derived
Baseclass object *pointer = &dobj //Base object pointer, pointing to derived object
pointer->virtual function() //call actual (derived) object type's function

Polymorphic Class - A class that declares/inherits a virtual function
essential polymorphism: different classes, same function name, same function parameters, different function implementations

PURE VIRTUAL FUNCTIONS
Case: when want to include virtual function in base class so it can be redefined in derived class, 
but there is no meaningful function in base class
Pure virtual functions = virtual member functions without definition ("make your own derived function", base functions)
Every derived class inheriting from class with pure virtual function MUST overide that function
if pure virtual function is not overridden, compiler errors at derived object instantiation
*/
#include <iostream>
using namespace std;

class MyClass{
    public:
        virtual void getValue(){ // can have implementation in base class
            cout << "BaseVal" << "\n";
        }

};

class MySub : public MyClass{
    public:
        void getValue(){
            cout << "SubVal" << "\n";
        }
};

class MySuper : public MyClass{
    public:
        void getValue(){
            cout << "SuperVal" << "\n";
        }
};

int main(){

    MySub sub;
    MySuper super;
    MyClass base;

    MyClass *s1 = &sub;
    MyClass *s2 = &super;
    MyClass *s3 = &base;

    //calling derived class functions from base class object pointer using virtual base class function
    s1->getValue();
    s2->getValue();
    s3->getValue();
    return 0;
}