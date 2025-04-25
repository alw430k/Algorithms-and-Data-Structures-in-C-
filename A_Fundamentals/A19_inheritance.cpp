/*
INHERITANCE
Inhertiance - class defined based on another class
allows for greater ease in creating and mantingin an application

Class that is inhereited from -  Base class (Mother)
Class that inherits properties - Derived class (Daughter)

Derived class inherits all features from Base class,
and can have additional features

PROTECTED
protected access specifier keyword
Protected member variable/function is similar to private member, but can be accessed in the Derived class 

CONSTRUCTOR/DESTRUCTOR
when inheriting, base class constructor and destructor are NOT inherited, 
but are being called when derived class obj is created/deleted
order: base made -> derived made -> derived dest -> base dest
the sequence allows specifying initialization and de-initialization scenarios for derived classes
essentially, derived needs base to work
*/
#include <iostream>
using namespace std;

class Base{ //mother
    public:
        // Base(){};
        Base(){
            cout << "Base Created\n";
        }
        void print() {
            cout << "Hello.\n";
        }
        ~Base(){
            cout << "Base Destroyed\n";
        }
    private:
        int var = 0;
    
    protected:
        int protvar = 0;
};




// base class is specified using : and access specifier
// access specifiers specify type of inheritance
// public - all public members of base class become public in the derived class
//          most commonly used inheritance
// protected - protected members of base become protected of derived
// private - public and protected members of base become private of derived
//         - base class private members are never accessible directly from derived:
//              need to access through calls to public/protected base class members
//         - if no access specifier is used when inheriting, becomes private by default
class Derived : public Base{ //daughter inheriting from mother
    public:
        Derived() {
            cout << "Derived Created\n";
        };
        ~Derived(){
            cout << "Derived Destroyed\n";
        }
};


// void Base::print(){
//     cout << "base class";
// }

int main(){

    Derived d;
    d.print();

    return 0;
}