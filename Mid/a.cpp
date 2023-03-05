#include <iostream>
#include <string>
using namespace std;

// comment

/*
long line comment
feferwf
fwefwf
wfwfewfw
fwsdfewfwf
fwfewf
*/

int main() {
    int a = 5;
    float b = 5.9;
    double c = 5.9;
    string d = "jamessexless";
    string num = "5";
    char e = 'e';

    int aa;
    string bb;
    cin >> aa;
    cout << aa << endl;

    getline(cin, bb); // clear buffer

    
    //cin >> bb;
    
    getline(cin, bb); // get input
    cout << bb << endl;
    cout << aa << endl;


    /*
        1 is true but 0 is false it is computer compiler | ! it is นิเสธ
        || = or
        && = and
    */
    bool f = true && false; 


    cout << !f << endl;


    cout << num + num << endl; // concatinate
    cout << stoi(num) + stoi(num) << endl; // convert string to number
    cout << d.substr(5, d.length() - 1) << endl; // cut some part of string
    cout << d.length() << endl; // length of string
    cout << c + c << endl; 
    cout << to_string(c) + to_string(c) << endl; // convert number to string
    

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << "Hello World" << endl;
    cout << d << endl;
}