/*
must specify types for C++ parameters in classes and functions
becomes necessary to specify a function for every parameter type

Function templates allow function creation by with any type
avoid specifying exact type of each variable
templates use placeholder types that are specified on function call
template type parameters = placeholder types

function templates can save time because they are only written once, and reduce code maintenance
provides enhanced safety, duplicate code is reduced, no manual copying of functions and chaning types

T is short for type, and widely used for type parameter name
otherwise, can freely declare type parameter name avoiding C++ keywords

when declaring template parameter, must use it in function definition
otherwise compiler error
*/
#include <iostream>
using namespace std;

int sum(int a, int b){ //function limited to integers
    return a+b;
}
double sum(double a, double b){ //function limited to doubles
    return a+b;
}

//keyword template, template type definition
//template type T is a generic data type
template <class T>
T templatesum(T a, T b){
    return a+b;
}

//multiple generic data types
template<class U, class V>  // define with comma-seperated list
//comparing arguments of varying data types
U templatemin(U a, V b){ //outputs to type of first argument
    return (a < b ? a : b); // ternary operator if(a<b) then a else b
}

int main(){
    int x=1, y=2;
    cout << sum(x,y) << "\n";
    cout << templatesum(x,y) << "\n";
    double a=1.5, b=2.7;
    cout << templatesum(a,b) << "\n";
    cout << templatesum(a,b) << "\n"; // can be used with other data types
    
    //multiple generic types template
    cout << templatemin(a,b) << "\n"; 
    cout << templatemin(y,b) << "\n"; // int and double arguments: outputs to int because first argument is int
}