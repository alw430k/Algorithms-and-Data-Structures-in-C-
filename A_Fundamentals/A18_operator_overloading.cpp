/*
C++ built in operators can be redefined/overloaded

overload-able operators: 
+   -   *   /   %   ^
&   |   ~   !   ,   =
<   >   <=  >=  ++  --
<<  >>  ==  !=  &&  ||
+=  -=  /=  %=  ^=  &=
|=  *=  <<= >>= []  ()
->  ->* new new[]   delete  delete[]

non-overloadable operators:
::  .*  .   ?:


overloaded operators are functions, defined by keyword operator followed by the symbol for defining operator
overloaded operator has return type and parameter list

allows object creation in main by using the overloaded operator to perform a function.
 */
#include <iostream>
using namespace std;

class MyClass{
    public:
        int var; // member variable
        MyClass(){} //constructor 1
        MyClass(int x) : var(x) {} //constructor 2

        //overloading + operator
        MyClass operator+(MyClass &obj){ // returns new object of class, and takes object of class as parameter
            MyClass result;
            result.var = this->var+obj.var; //gets member of current object using this keyword
            return result;
        }

};

int main(){
    MyClass objA(2), objB(4); //make two objects
    MyClass result = objA + objB; //use the overloaded operator on the two objects
    cout << result.var << "\n"; //display resulting object's member variable
    return 0;
}