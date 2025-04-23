/*
In C++, ovject conposition uses classes as member variables in other classes.

*/
#include <iostream>
using namespace std;

class MyClass{
    public:
        MyClass(int A, int B, int C)
        : memberA(A), memberB(B), memberC(C){    
        }
        void print(){
            cout << "printed class.\n";
        }
    private:
        int memberA;
        int memberB;
        int memberC;
};

class myCourse{
    public:
        myCourse(string N, MyClass M)
        : name(N), cls(M){

        }
        void printCourse(){
            cout << "printed course.\n";
            cls.print();
        }
    private:
        string name;
        MyClass cls;
};


int main(){
    MyClass X(1, 2, 3);
    myCourse Y("courseY", X);
    Y.printCourse();

    return 0;
}