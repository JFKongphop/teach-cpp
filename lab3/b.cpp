#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;


int main() {
    int arr[10];
    int choice;
 
    for (int i = 0; i < 10; i++) {
        int num;
        cout << "value of arr[" << i << "] : ";
        cin >> num;
        arr[i] = num;
    }

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "1.Max" << endl << "2.Min" << endl << "3.Sum" << endl << "0.Exit" << endl;

    while (true) {
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice == 1) {
            int max;
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    max = arr[0];
                }

                else {
                    if (max < arr[i]) {
                        max = arr[i];
                    }
                }
            }

            cout << "Max is : " << max << endl;
        }

        else if (choice == 2) {
            int min;
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    min = arr[0];
                }

                else {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
            }

            cout << "Min is : " << min << endl;
        }

        else if (choice == 3) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += arr[i];
            }

            cout << "Sum is : " << sum << endl;
        }

        else if (choice == 0) {
            break;
        }

        else cout << "Please enter valid choice" << endl;

        cout << "" << endl;
    }
}
