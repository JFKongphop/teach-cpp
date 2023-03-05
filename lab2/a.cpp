#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    double average = sum / 10;
    cout << "sum = " << sum << " average = " << average << endl;
}
