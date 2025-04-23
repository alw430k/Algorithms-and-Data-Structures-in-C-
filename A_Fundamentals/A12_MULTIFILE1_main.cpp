#include <iostream>
#include "MULTIFILE1_classes.cpp" // needs source file, not header file
//#include "MULTIFILE1_classes.h"
using namespace std;

int main(){
    MyClass obj;
    obj.MyPrint();

    // pointers can be used to access object members
    MyClass *ptr = &obj; // review: define pointer with * operator, assign object's memory object with & operator 

    // Selection Operator: arrow member selection operator is used to access an object's members with a pointer
    // when working with object, use . dot operator; when working with pointer to object, use the -> arrow member selection operator
    ptr -> MyPrint();
}