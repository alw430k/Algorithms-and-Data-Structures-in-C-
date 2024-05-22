#include <iostream>
using namespace std;

int main(){
    // array variable name is actually a pointer to its first element (&arr[0])
    int arr[] = {2,4,5,6};

    int *p = arr; //*p = arr and not &arr, because the array name itself is already a pointer. (* is pointer definition here)
    // arrays are stored contiguously in memory
    // the dereference operator can be used with *(p+1) to increment the contiguous address of the array, or index value being referred to

    cout << arr[0] << " " << *p << endl;
    cout << arr[1] << " " << *(p+1) << endl;

    for (int i=0; i<4; i++){
        cout << *(p+i) << endl;
    }




}