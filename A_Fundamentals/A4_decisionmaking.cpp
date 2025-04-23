#include <iostream>
using namespace std;

int main(){
    // operations
    // <    less than
    // >    greater than
    // !=   not equal to
    // ==   equal to
    // <=   less than or equal to
    // >=   greater than or equal to
    if (true) {
        cout << true;
    } else if (false){
        cout << false;
    } else {
        cout << false;
    }

    // switch statement
    int choice = 2;
    switch(choice){
        case 1:
            cout << 1;
            break; // need to break out of switch statement, otherwise all consecutive cases will be run regardless of choice
        case 2:
            cout << 2;
            break;
        case 3:
            cout << 3;
            break;
        default:
            cout << "other";
    }
    // multiple conditions
    // &&   logical AND
    // ||   logical OR
    // !    logical NOT
}