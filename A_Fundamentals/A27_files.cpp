/*
Files
reading/writing files in c++
fstream library
three new datatypes:
    ofstream - output filestream that creates and writes information to files
    ifstream - input filestream that reads information from files
    fstream - general file strean, with both of and if stream capabilities
<iostream> and <fstream> headers needed
these are derived from istream and ostream (direct or indirect)

1. open the file (to write/read) either ofstream or fstream used
2. write to or read from file
3. close the file

close the file when no longer using
path can be specified when opening file

is_open() function returns bool for whether file is already open or not
    checking permissions to work with file
can also define file path on object constructor call

open() has second parameter that defines mode in which file is opened as flags
open(filepath, flags)

modes:
    ios::app - append to end of file
    ios::ate - go to end of file on opening
    ios::binary - open in binary mode
    ios::in - read only
    ios::out - write only
    ios::trunc - delete contents of the file if exist

flags can be combined using bitwise OR operator |

reading done with ifstream or fstream object
getline() function reads characters from input stream and places into string
while loop with getline function will read every line of the file
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //writing
    ofstream MyFile; //define object
    MyFile.open("test.txt"); //open file
    MyFile << "hello file\n"; //write to file
    MyFile.close(); //close file

    ofstream MyFile2("test.txt"); // can specify path on object creation
    if (MyFile2.is_open()){ //check whether file is open
        MyFile2 << "hello file\n";
    }
    MyFile2.close();

    ofstream MyFile3; 
    MyFile3.open("test.txt", ios::out | ios::trunc); 
    MyFile3 << "hello file\n"; 
    MyFile3.close(); 

    //reading
    string line; // define variable to hold line
    ifstream MyFile4("test.txt"); // create input stream object
    while (getline (MyFile4, line)){ // read each line and place into variable
        cout << line << '\n';
    }
    MyFile4.close(); // close file
}