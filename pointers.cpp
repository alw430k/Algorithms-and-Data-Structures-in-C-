#include <iostream>
using namespace std;

int main(){
    int num = 42;
    
    // a pointer is a variable that stores the memory address of another variable as its value
    int *p; //type *var is a pointer definer using the * operator (definition): p is now a pointer that will point to an integer value in memory
    
    p = &num; // the address of a variable can be accessed using the & operator

    cout << p << endl; // shows the address stored in the pointer

    cout << *p; // shows the value stored at the memory address the pointer points to; * operator is the value (dereference) operator here 

    *p = 8; // change the value of a variable through the pointer's address



}