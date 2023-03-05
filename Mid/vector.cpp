#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector cannot set the initial value of it
    // if you want to add the element must input to this vector
    vector<int> numbers ;// {1, 2, 3, 4};
    // vector<string> characters = {"a", "b", "c" ,"d"};

    //cout << "number : " << numbers.push_back(1) << endl;

    // cout << "number : " << numbers[0] << endl;
    // cout << "number : " << numbers[1] << endl;
    // cout << "number : " << numbers[2] << endl;

    // numbers.push_back(1);
    // numbers.push_back(2);
    // numbers.push_back(3);
    for (int i = 0; i < 3; i++) {
        int n;
        cout << "n : ";
        cin >> n;
        numbers.push_back(n);
    }

    // size of vector
    cout << numbers.size() << endl;

    
    // cout << "number : " << numbers[0] << endl;
    // cout << "number : " << numbers[1] << endl;
    // cout << "number : " << numbers[2] << endl;
    for (int i = 0; i < 3; i++) {
        cout << "number : " << numbers[i] << endl;
    }
}