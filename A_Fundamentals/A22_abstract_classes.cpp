/*
PURE VIRTUAL FUNCTIONS
Case: when want to include virtual function in base class so it can be redefined in derived class, 
but there is no meaningful function in base class
Pure virtual functions = virtual member functions without definition ("make your own derived function", base functions)
Every derived class inheriting from class with pure virtual function MUST overide that function
if pure virtual function is not overridden, compiler errors at derived object instantiation

ABSTRACT CLASSES
cannot create objects of base class with a pure virtual function
if class has pure virtual function => becomes abstract class
abstract classes can only be used as base classes and must be inherited from to use

can make abstract base class pointers to use its polymorphic abilities
abstract baseclass pointer can be made to point to any derived class object
any member function call of the pointer will call the proper derived class overridden member function
bacause virtual
*/
#include <iostream>
using namespace std;

class MyClass{
    public:
        virtual void puregetValue() = 0; //replace their definition by =0, tell compiler that cuntion has no body

};

class MySub : public MyClass{
    public:
        void puregetValue(){
            cout << "pure overidden by Sub" << "\n";
        }
};

class MySuper : public MyClass{
    public:
        void puregetValue(){
            cout << "pure overidden by Super" << "\n";
        }
};

int main(){

    MySub sub;
    MySuper super;
    
    MyClass *s1 = &sub;
    MyClass *s2 = &super;
    

    //calling derived class overidden base class pure virtual function
    s1->puregetValue();
    s2->puregetValue();
    return 0;
}