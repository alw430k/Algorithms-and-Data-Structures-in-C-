#include <iostream>
#include "MULTIFILE2_const.cpp"
using namespace std;


/*
A constant is an expression with a fixed balue
cannot be changed while program is running
use const keyword to define constant variable

All const variables must be initilized when created
class initialization is done ia constructors
if class not initialized using a parameterized constructor, a public default constructor is necesary
if no public default constuctor exists, a compiler error will occur

Once cons claass obj has been initialized bia the constructor, cannot modify ovhect;s member variables
includes making changes to public member variables, and calling member functions that set balue of member variables
cannot change data members during obj's lifetime
*/



int main(){
    const int x = 42; // use const keyword to make constant objects
    const MyClass obj; // declare constant object 
    obj.myPrint(); 

}