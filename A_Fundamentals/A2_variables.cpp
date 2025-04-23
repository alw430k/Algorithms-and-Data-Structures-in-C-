#include <iostream> // include adds header file to program
using namespace std; // namespace to use in program (cout is part of std namespace, which is in iostream header file)

int main(){ // main function is always entry point of c++ program
    string message; // string variable declaration
    message = "hello world"; // variable assignment (string double quotations)
    cout << message;
    int integer = 1; // integer whole number
    double float64 = 1.1; //more precise, but larger memory required than float
    float float32 = 1.1; //less precise, but less memory required and faster than double
    char c = 'c'; // character, assign single character with single quotations
    bool b = true; // (1) or false (0), boolean

    int a = 1, b = 1; // multiple variable declarations
    auto a = 1.4, b = 2.5; // auto keyword assigns impled datatype

    string input;
    int input2;
    cin >> input >> input2; // multiple inputs; single input cin >> input;
    cout << "input: " << input; // outputs

}