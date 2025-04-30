/*
can also define class templates
with template keyword
- classes can have members that use template parameters as types
- works for multiple templates, comma separated: template<class T, class U>
- special syntax needed when defining outside of class:
    need to specify the generic type in angle brackets after class name MyClass<T>

- create objects for template class by specifying data type in anble brackets
 */
#include <iostream>
using namespace std;

template<class T>
class MyClass{
    private:
        T a, b; // generic type private variables
    public:
        MyClass (T x, T y): a(x), b(y){ // constructor with member initialization

        }
        T function();
};

// defining outside of class
template <class T>
T MyClass<T>::function(){
    //code here
    return (a<b ? a : b); // ternary operator (condition ? true : false)
}

int main(){
    MyClass <int> obj(1, 2); //degine template class object as type integer
    cout << obj.function();

    return 0;
}