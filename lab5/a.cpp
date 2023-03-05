#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> studentID, studentscore;
    vector<string> studentGrade;
    int ID, score;
    cout << "Enter student Id end with 0 or negative: " ;
    cin >> ID;
    while (ID > 0) {
        studentID.push_back(ID);

        cout << "Enter student score: " ;
        cin >> score;
        studentscore.push_back(score);

        string grade;
        if (score >= 90) {
            grade = "A";
        }
        else if (score >= 80) {
            grade = "B";
        }
        else if (score >= 70) {
            grade = "C";
        }
        else if (score >= 60) {
            grade = "D";
        }
        else {
            grade = "F";
        }

        studentGrade.push_back(grade);

        cout << "Enter Student ID end with 0 or negative: ";
        cin >> ID;
    }
    cout << "StudentID\tStudent Score\tStudent Grade" << endl;
    for (int i = 0; i < studentID.size(); i++) {
        cout << studentID[i] << "\t" << studentscore[i] << "\t" << studentGrade[i] << endl;
    }
}
