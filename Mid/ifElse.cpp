#include <iostream>
using namespace std;

int main() {
     
    bool condition = true;
    string show;
    
    if (condition) show = "True";

    else if (condition) {
        show = "Else if True";
    }

    else {
        show = "False";
    }



    // cout << show << endl;

    // long long เจม = 100000000000000;
    // switch (เจม) {
    // case 1:
    //     cout << "เจม 1" << endl;
    //     break;
    
    // case 2:
    //     cout << "เจม 2" << endl;
    //     break;

    // case 3:
    //     cout << "เจม 3" << endl;
    //     break;
    
    // default:
    //     cout << "เจม ดีฟอล" << endl;
    //     break;
    // }



    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }

    int kuay = 1;
    while (kuay < 10) {
        cout << kuay << endl;
        kuay++;
    }

    do
    {
        cout << kuay << endl;
        kuay++;
    } while (kuay < 1);
    
    
}