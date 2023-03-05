#include <iostream>
using namespace std;

int main() {
    int round, input, sum = 0;
    cin >> round;
    if (round == 0) {
        cout << "the average value cannot be calculated";
    }

    else {
        for (int i = 1; i <= round; i++) {
            cin >> input;
            sum += input;
        }

        double average = sum / round;
        cout << average;
    }
}