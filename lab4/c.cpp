#include <iostream>
#include <math.h>
using namespace std;

int minNumber (int arr[]) {
    int min;
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            min = arr[0];
        }

        else {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
    }

    return min;
}

int maxNumber (int arr[]) {
    int max;
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            max = arr[0];
        }

        else {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }

    return max;
}

int sumNumber (int arr[]) {
    int sum = 0;
    for (int i = 0; i < 5; i ++) {
        sum += arr[i];
    }

    return sum;
}



int main() {
    int numArr[3][5] = {
        {50, 45, 8, 15, 3},
        {40, 32, 5, 9, 10},
        {30, 36, 78, 10, 99}
    };

    while (true) {
        int choice;
        cout << "Enter choice : ";
        cin >> choice;

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                cout << "The maximum number in row " << i << " is " << maxNumber(numArr[i])<< endl; 
            }
        }

        else if ( choice == 2) {
            for (int i = 0; i < 3; i++) {
                cout << "The minimum number in row " << i << " is " << minNumber(numArr[i])<< endl; 
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < 3; i++) {
                cout << "The sum number in row " << i << " is " << sumNumber(numArr[i])<< endl; 
            }
        }

        else if (choice == 0) {
            break;
        }
    }
}