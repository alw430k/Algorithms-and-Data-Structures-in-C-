/*
Template Specialization
allows for different implementation of a template, base on specific data type
(normally, templates run the same for every datatype)

to specify different behavior for specific data type, make template specialization <>
template specialization uses empty angle brackets: template <>
    empty because all types are known (specifically defined) in the function
    however, is still a template
template specialization uses the specified type in angle brackets after class name: class MyClass<char>{};

below:
    first class is generic template
    second class is template specialization

the specialization can define completely different behavior than the generic
inheritance doesnt occur between generic to specialization, so all members must be defined each time
*/

#include <iostream>
using namespace std;

template <class T>
class MyClass{
    public:
        MyClass(T x){
            cout << x <<" is not a char\n";
        }
};

template <>
class MyClass<char>{
    public:
        MyClass (char x){
            cout << x << " is a char\n";
        }
};

int main(){ //need to specify type when defining object of class template
    MyClass<int> obj1(1);
    MyClass<double> obj2(2.0);
    MyClass<char> obj3('c');
}