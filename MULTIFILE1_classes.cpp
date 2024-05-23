// good practice to define new classes in seperate files -> easier to maintain and read code
// create a .cpp source file and a .h header file

//The header file (.h) holds the function declarations (prototypes) and variable declarations
//The implementation of the class and its methods go into the source file (.cpp)
// so header is responsible for class structure (members and attributes, access specifiers), source is responsible for method operations (calculations, processes)

#include <iostream>
#include "MULTIFILE1_classes.h" // needs header file
using namespace std;

MyClass::MyClass() // the double colon :: is the scope resolution operator, and used for constructor definition
{
    //ctor
    cout << "MyClass Constructor Called!" << endl;
}

void MyClass::MyPrint(){ // member function (method) (needs return type)
    cout << "Hello!" << endl;
}

MyClass::~MyClass() // destructor
{
    //dtor
    cout << "MyClass Destructor Called!" << endl;
}

//constructor prototype is already defined in the the header file
/* .h file
class MyClass
{
    public:
        MyClass();
    protected:
    private:
};
*/

// so, MyClass::MyClass() referes to the MyClass() member function, or constructor of the MyClass class


// int main(){
//     MyClass obj;
// }

