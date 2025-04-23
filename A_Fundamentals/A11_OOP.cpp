#include <iostream>
using namespace std;

class BankAccount { // class definition
    //define attributes and behavior
    //define access specifier for members of the class (public: can be accessed from outside of class, as long as it's anywhere within the scope of the class object)
    public: // access specifier
        void Hi(){  // method member
            cout << "Hi!" << endl;
        }
};

// data abstraction: the concept of probiding only essential information to the outside world (representing essential features without including implementation details)
// Abstraction : an idea or concept that is completely seperate from any specific instance (a class! or a method!)

// Encapsulation: the idea of surrounding an entity, to keep what's inside together, and to protect it.
// make so that inside cannot be changed directly from outside, and must be accessed through methods vai (get, set) AKA "blackboxing"

class encapsulated {
    public:
        void set(string val){
            name = val;
        }
        string get(){
            return name;
        }
    private: // private access specifier
        string name; //name is now encapsulated by the class, and can only be accessed/modified from the outside through get() and set() methods
};

class constructors {
    public:
        constructors(){ // constructor method for the class: is called on object instantiation (no return type, same name as class name)
            cout << "this is the constructor method!" << endl;
        }
        constructors(string var){ // constructor with parameters (class object is created with parameters) (constructors can be overloaded!)
            cout << "constructor with parameter " << var << endl;
        }
        void othermethod(){
            cout << "other method" << endl;
        }
};

class destructors {
    public:
        destructors(){ // constructor
            cout << "Constructor Called! Object Created" << endl;
            // ctor
        }

        // destructors are special functions called when an object is destroyed or deleted
        // can be useful for releasing resources before coming out of the program (memory, files, etc)
        // mandatory
        // since destructors cannot take parameters, they cannot be overloaded
        ~destructors(){ // destructor declared with tilde ~ prefix
            cout << "Destructor Called!" << endl;
            // dtor
        }

};

int main(){
    BankAccount test; //instantiate class object (object has all members of the class defined)
    test.Hi(); // call Hi() method of the object with dot operator .
    encapsulated obj;
    obj.set("Hello!");
    cout << obj.get() << endl;
    
    constructors constr; // class constructor called
    constructors constwparam("Hi!"); // constructor with parameter

    destructors dstr; // destructor class
}