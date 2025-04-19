#include <iostream>
#include <string>
#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 123;
    string astr = to_string(a);
    int len = sizeof(astr)/sizeof(char);
    cout << astr << " "<<len << endl;
    // char charrarr[astr.length()+1];
    // strcpy(charrarr, astr.c_str());
    // char reversedstr[astr.length()+1];
    string rs = "";
    int c = 0;
    for (int i=len; i>0; i--){
        rs += astr[i];
        c++;
    }
    //string rs = string(reversedstr);
    cout << rs << endl;
}