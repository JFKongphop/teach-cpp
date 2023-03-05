#include <iostream>
using namespace std;

int main() {
    string grade;
    cout << "Enter score is greater than 0" << endl;
    int score;
    cin >> score;

    while (score != 0) {
        if (score >= 80) {
            grade = "A";
        } 
        
        else if (score >= 75) {
            grade = "B+";
        } 
        
        else if (score >= 70) {
            grade = "B";
        } 
        
        else if (score >= 65) {
            grade = "C+";
        } 
        
        else if (score >= 60) {
            grade = "C";
        } 
        
        else if (score >= 55) {
            grade = "D+";
        } 
        
        else if (score >= 50) {
            grade = "D";
        } 
        
        else {
            grade = "F";
        }

        cout << "score = " << score << " grade = " << grade << endl;
        cout << "Enter score is greater than 0" << endl;
        cin >> score;
        cout << "Goodbye" << endl;
    }
}