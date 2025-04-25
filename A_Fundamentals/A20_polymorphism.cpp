/*
polymorphism: having many forms
pylomorphism occurs when a hirarchy of classes are related by inheritance

C++ polymorphism = member function call causes a different implementation to be executed 
depending on type of object invoking the function
i.e. single function can have multiple different implementations
*/
#include <iostream>
using namespace std;

class MyClass{
    public:
        void setValue(int x){
            value = x;
        }
    protected:
        int value;

};

class MySub : public MyClass{
    public:
        void getValue(){
            cout << "SubVal " << value << "\n";
        }
};

class MySuper : public MyClass{
    public:
        void getValue(){
            cout << "SuperVal " << value << "\n";
        }
};

int main(){
    // create derived objects
    MySub sub;
    MySuper super;

    // all derived inherit from base, so all sub and super objects are base objects
    // can assign base object pointer to derived object address
    MyClass *s1 = &sub;
    MyClass *s2 = &super;

    //can use pointer without worrying about object inheritance level
    //calling base class function on derived class objects
    s1->setValue(10);
    s2->setValue(20);

    //calling derived class functions
    sub.getValue();
    super.getValue();
    return 0;
}