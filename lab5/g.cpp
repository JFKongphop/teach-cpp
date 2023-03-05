#include <iostream>
#include <string>
using namespace std;

string grader(string scoreInput) {
    int score = stoi(scoreInput);
    string grade;

    if (score >= 90) {
        grade = "A";
    }

    else if (score >= 85) {
        grade = "B+";
    }

    else if (score >= 80) {
        grade = "B";
    }

    else if (score >= 75) {
        grade = "C+";
    }

    else if (score >= 70) {
        grade = "C";
    }

    else if (score >= 65) {
        grade = "D+";    
    }

    else if (score >= 60) {
        grade = "D"; 
    }

    return grade;
};

int main() {
    while (true) {
        int numStudent;
        cout << "Please enter number of students (1-10) : ";
        cin >> numStudent;

        if ((numStudent > 0) && (numStudent < 11)) {
            string idAndScore[numStudent];
            for(int i = 0; i < numStudent; i++) {
                string studentData;
                if (i == 0) {
                    cout << "Enter ID and score of student 1 separated by space ";
                    getline(cin, studentData);
                    getline(cin, studentData);

                    idAndScore[i] = studentData;
                }

                else {
                    cout << "Enter ID and score of student 1 separated by space ";
                    getline(cin, studentData);

                    idAndScore[i] = studentData;
                }
            }

            cout << "Student ID | Student Score | Student Grade" << endl;
            for(int j = 0; j < numStudent; j++) {
                string score = idAndScore[j].substr(idAndScore[j].length() - 2);
                string id = idAndScore[j].substr(0, idAndScore[j].length() - 2);

                cout << id << "          " << score << "              " << grader(score) << endl;
            }
        } 
    }
}