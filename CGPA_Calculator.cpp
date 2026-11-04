
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int courses;

    cout << "===== CGPA CALCULATOR =====\n";
    cout << "Enter number of courses: ";
    cin >> courses;

    if (courses <= 0) {
        cout << "Invalid number of courses!\n";
        return 1;
    }

    vector<double> grades(courses);
    vector<double> credits(courses);

    double totalCredits = 0;
    double totalGradePoints = 0;

    for (int i = 0; i < courses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter grade point (0-10): ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> credits[i];

        if (grades[i] < 0 || grades[i] > 10 ||
            credits[i] <= 0) {
            cout << "Invalid input!\n";
            return 1;
        }

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n===== RESULT =====\n";

    for (int i = 0; i < courses; i++) {
        cout << "Course " << i + 1
             << " | Grade: " << grades[i]
             << " | Credits: " << credits[i] << endl;
    }

    cout << fixed << setprecision(2);

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nFinal CGPA: " << cgpa << endl;

    return 0;
}
