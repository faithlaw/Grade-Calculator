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
        cout << "Score: ";
        cin >> scores[i];
    }

    double total = 0;
    for (int i = 0; i < n; i++)
        total += scores[i];

    double avg = total / n;

    char grade;
    if (avg >= 90) grade = 'A';
    else if (avg >= 80) grade = 'B';
    else if (avg >= 70) grade = 'C';
    else if (avg >= 60) grade = 'D';
    else grade = 'F';

    cout << "\n--- Results ---" << endl;
    for (int i = 0; i < n; i++)
        cout << subjects[i] << ": " << scores[i] << endl;

    cout << "Average: " << avg << endl;
    cout << "Grade: " << grade << endl;
    cout << (avg >= 60 ? "Status: PASS" : "Status: FAIL") << endl;

    return 0;
}
