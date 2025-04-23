#ifndef MULTIFILE1_CLASSES_H
#define MULTIFILE1_CLASSES_H

//ifndef: "if not defined"
// first two lines tell program to define MyClass header file if not defined already
//endif ends the condition
class MyClass
{
    public:
        MyClass(); //constructor
        void MyPrint(); // member function (method) (needs return type)
        ~MyClass(); //destructor
    protected:
    private:
};

#endif // MULTIFILE1_CLASSES_H