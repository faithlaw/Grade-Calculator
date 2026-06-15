#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "=== My First Project: Grade Calculator ===" << endl;
    cout << "Enter number of subjects: ";
    cin >> n;

    string subjects[10];
    double scores[10];

    for (int i = 0; i < n; i++) {
        cout << "Subject " << i+1 << " name: ";
        cin >> subjects[i];
        cin.ignore();
        getline(cin, subjects[i]);
        cout << "Score: ";
        cin >> scores[i];
    }

    double total = 0;
    for (int i = 0; i < n; i++)
        total += scores[i];

    double avg = total / n;

    string grade;
    float gpa;
    if (avg >= 90) {
        grade = "A+";
        gpa = 4.0;
    } else if (avg >= 80) {
        grade = "A";
        gpa = 4.0;
    } else if (avg >= 70) {
        grade = "B";
        gpa = 3.0;
    } else if (avg >= 60) {
        grade = "C";
        gpa = 2.0;
    } else {
        grade = "F";
        gpa = 0.0;
    }

    cout << "\n--- Results ---" << endl;
    for (int i = 0; i < n; i++)
        cout << subjects[i] << ": " << scores[i] << endl;

    cout << "Average: " << avg << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;
    cout << (avg >= 60 ? "Status: PASS" : "Status: FAIL") << endl;

    return 0;
}
