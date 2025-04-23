/*
Private members of a class cannot be accressed from outside of the class
Declaring a non-member function as a friend allows it to access the class' private mebers
Declare this external function with the class, and precede with friend keyword

To make members accessible, class has to declare function as a friend
when two different classes access private members of both, friend functions are used
can also make friend classes, which can access private members of another class
*/
#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass(){
            regVar = 0;
        }   
    private:
        int regVar;
        
        friend void func(MyClass &obj); // friend of MyClass, but not a member function of MyClass
        // when passing obj to function, need to pass by reference with & operator
};

//func is defined as a regular function outside of the class
//takes object of type class
//able to access private data members of object
void func(MyClass &obj){
    obj.regVar = 42; // can change private member of object
    cout << obj.regVar;
}

int main(){
    MyClass obj;

    func(obj);
    return 0;
}