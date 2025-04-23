/*
C++ objects have accress to their own address using the this pointer
inside member function
this keyword used to refer to invoking object
this keyword stores member address of the object
this keyword is used in operator overloading
*/
#include <iostream>
using namespace std;

class MyClass{
    public:
        MyClass(int x): var(x){

        }
        void print(){ // three ways to access the object's member.
            cout << var << "\n";
            cout << this->var << "\n";
            cout << (*this).var << "\n";
        }
    private:
        int var;
};


int main(){
    MyClass obj(3);
    obj.print();
    return 0;
}