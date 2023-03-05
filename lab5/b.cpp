#include <iostream>
#include <vector>
using namespace std;

int minNumber (vector<int> arr) {
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

int maxNumber (vector<int> arr) {
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

int sumNumber (vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < 5; i ++) {
        sum += arr[i];
    }

    return sum;
}

int main() {

    while (true) {
        int choice;
        cout << "Enter choice : ";
        cin >> choice;

        int numArr[3][5] = {
            {50, 45, 8, 15, 3},
            {40, 32, 5, 9, 10},
            {30, 36, 78, 10, 99}
        }; 

        vector<vector< int> > vecto; 
        
        for (int i = 0; i < 3; i++) {
            vector<int> eachVec;
            for (int j = 0; j < 5; j++) {
                eachVec.push_back(numArr[i][j]);
            }

            vecto.push_back(eachVec);
        }

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                cout << "The maximum number in row " << i << " is " << maxNumber(vecto[i])<< endl; 
            }
        }

        else if ( choice == 2) {
            for (int i = 0; i < 3; i++) {
                cout << "The minimum number in row " << i << " is " << minNumber(vecto[i])<< endl; 
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < 3; i++) {
                cout << "The sum number in row " << i << " is " << sumNumber(vecto[i])<< endl; 
            }
        }

        else if (choice == 0) {
            break;
        }
    }
}