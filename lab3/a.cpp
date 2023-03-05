#include <iostream>
#include <math.h>
using namespace std;

int main() {
    while (true){
        int choice;
        cout << "1.Circle" << endl << "2.Rectangle" << endl << "3.Triangle" << endl << "0.Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1) {
            const double PI = 3.1415;
            int radius;
            cout << "Enter your radius : ";
            cin >> radius;

            if (radius < 0) {
                cout << "Please enter positive number" << endl;
                cout << "" << endl;
                continue;
            }

            cout << PI * pow(radius, 2) << endl;
        }
        
        else if (choice == 2) {
            int height;
            int width;

            cout << "Enter your height : ";
            cin >> height;
            
            cout << "Enter your width : ";
            cin >> width;

            if (height < 0 && width < 0) {
                cout << "Please enter positive number" << endl;
                cout << "" << endl;
                continue;
            }

            cout << height * width << endl;
        }

        else if (choice == 3) {
            int height;
            int base;

            cout << "Enter your height : ";
            cin >> height;
            
            cout << "Enter your base : ";
            cin >> base;

            if (base < 0 && base < 0) {
                cout << "Please enter positive number" << endl;
                cout << "" << endl;
                continue;
            }

            cout <<  double(height * base) * 0.5 << endl;
        }

        else if (choice == 0) {
            break;
        }

        else {
            cout << "Please enter valid choice" << endl;
        }

        cout << "" << endl;
    }   
}