#include <iostream>
using namespace std;

int main(){
    int count = 0;
    while(count<10) {
        cout << count;
        count++; // count = count + 1; increment; var-- is decrement;
    }   

    //shorhand operators
    //var += val; var = var + val
    //var -= val; var = var - val
    //var *= val; var = var * val
    //var /= val; var = var / val
    
    count = 0;
    do{
        cout<<count;
        count++;
    } while (count<10);

    for(int i=0; i<10; i++){
        cout << i;
    }
    // break breaks out of loop
    // continue skips rest of current iteration and starts next iteration

}