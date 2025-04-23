#include <iostream>
using namespace std;

int main(){
    int size = 8; // dynamically allocate based on size
    int *p = new int[size]; // new operator used to allocate memory; assign newly allocated array memory to pointer
    p[0] = 128; // assign values using the pointer
    p[1] = 888;
    p[2] = 9;

    cout << *(p+1);

    delete[] p; // free up the memory with delete operator


}