#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius;
    cout << "Enter radius is greater than 0" << endl;
    cin >> radius;

    while (radius > -1){
        double area;
        const double PI = 3.14159265;
        area = PI * pow(radius, 2);

        cout <<  area << endl;
        cin >> radius;
    }
}