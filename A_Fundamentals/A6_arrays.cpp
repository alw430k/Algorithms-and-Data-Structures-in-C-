#include <iostream>
using namespace std;

int main(){
    double array[5]; // type arrayvariable[array size];
    array[0] = 10.3; // arrayvariable[index] = value to assign
    cout << array[0] << endl; // arrayvariable[index] is the value at the index

    //looping over arrays
    for (int i=0; i<5; i++){
        cout << array[i] << endl;
    }
    for (double x: array){ // shorthand
        cout << x << endl;
    }
    for (auto x: array){ // array type can be anything
        cout << x << endl;
    }

    double multidimensional_array[2][3]; //2 rows, 3 columns
    multidimensional_array[0][0] = 2.4; // assign row index 0, column index 0 as 2.4
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout << multidimensional_array[i][j] << ' ';
        }
        cout << endl;

    }

}