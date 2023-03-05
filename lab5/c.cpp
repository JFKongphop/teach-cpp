#include <iostream>
#include <string>  
#include <vector>
using namespace std;


int main() {
    while (true) {
        string numb;
        cout << "please enter number of rows and columns separated by space : ";
        getline(cin, numb);
        int spaceIndex = numb.find(" ");
        //cout << spaceIndex << endl;
        int row = stoi(numb.substr(0, numb.length() - spaceIndex));
        int col = stoi(numb.substr(numb.length() - spaceIndex));
        //cout << row << endl;
        //cout << col << endl;
        
        vector< vector<int> > allVec;
        for (int i = 1; i < row + 1; i++) {
            vector<int> eachVec;
            eachVec.push_back(i);
            for (int j = i; j < (col + 1) * i; j += i) {
                eachVec.push_back(j);
            }
            allVec.push_back(eachVec);
        }

        for (int i = 0; i < row + 1; i++) {
            for (int j = 0; j < col + 1; j++) {
                cout << allVec[i][j] << " ";
            }
            cout << endl;
        }
    }
}