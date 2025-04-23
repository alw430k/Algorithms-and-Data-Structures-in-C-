#include <iostream>
using namespace std;

void hello(){   // return_type function_name(){ operation } // return type void means no return value
    cout << "Hello!" << endl;
}

void helloname(string name){ // function with parameter return_type function_name(data_type parameter_variable){ operation }
    cout << "Hello " << name << endl;
}

void multiply(int x, int y){    // multiple parameters example (seperate by comma)
    cout << x*y << endl;
}

int sum(int x, int y){ // return type int
    return x+y; // return the value
}

double sum(double x, double y){ // Overloading Functions: overloaded function of sum (same function name, but different parameter data type) (cannot overload functions that differ only by return type)
    return x+y;
}

double area(int x, int y=1){ // Default Argument: assign default value to parameter incase it isn't specified during call
    return x*y;
}

int main() {
    hello();
    helloname("Bob");
    multiply(3,4);
    int intsum = sum(3,4);
    cout << intsum << endl;
    double doublesum = sum(3.1, 4.4); // the correct overloaded function version will be called based on type of arguments (double)
    cout << doublesum << endl;
    double Area = area(5); // 5 * 1(default)
    cout << Area << endl;
}   

