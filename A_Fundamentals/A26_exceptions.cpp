/*
exceptions - code executed when problems occur
handling keywords:
    throw
    try
    catch

throw: operand determines tpe for the exception. type of expression's reult will detemrin type of exception thrown
try: block of code that identifies specific exceptions (throws exceptions); is followed by catck blocks
catch: block that executes when a specific exception is thrown
exceptions are handeled with try and catcb blocks
can specify exception to be causth with these blocks and throw

throw statement type is the exception type
multiple catch statements can be listed to handle various exceptions in case multiple exceotions thrown by one try block

exceptions useful for things like user input; variable cases
*/
#include <iostream>
using namespace std;

int main(){
    int x = 20;
    cin >> x;
    try{
        if (x==20){
            throw 3; // throws exception with certain code
        }
    }
    catch(int e){
        cout << "x is 20: " << e; //catches integer thrown
    }
}