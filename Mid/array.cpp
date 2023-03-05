#include <iostream>
#include <array>
using namespace std;

int main() {
    // if set size array you cannot set the element in array

    // we can set the size of array more than element
    // but we can set numbers of element more than size of array
    // if we set the size of array more than element this position is 0 if this array is int || if this array is string this position is ""
    string cars[4] = {};
    string fruits[4] = {"a", "b", "c", "d"};
    int numbers[5] = {1, 2, 3, 4}; 
    // cout << fruits[2] << endl;
    // cout << numbers[4] << endl;



    cout << "int size is " << sizeof(int) << " bytes" << endl; // size of each int = 4
    cout << "numbers length is " << sizeof(numbers) / sizeof(int) << endl; // size of array by sizeArray / sizeEachElement(type of this array)

    cout << "string size is " << sizeof(string) << " bytes" << endl; // size of each int = 24
    cout  << "fruits length is " << sizeof(fruits) / sizeof(string) << endl; // size of array by sizeArray / sizeEachElement(type of this array)


    // line 28 - 31 is similar output line 33 - 38
    string name[4];
    // name[3] = "A";
    // name[2] = "B";
    // name[1] = "C";
    // name[0] = "D";

    for (int i = 0; i < 4; i++) {
        string n;
        cout << "name : ";
        cin >> n;
        name[i] = n;
    }


    // line 43 - 46 is similar output line 48 - 50
    cout << "show name element " << endl;
    // cout << name[0] << endl;
    // cout << name[1] << endl;
    // cout << name[2] << endl;
    // cout << name[3] << endl;

    for (int i = 0; i < 4; i++) {
        cout << "name : " << name[i] << endl;
    }
}