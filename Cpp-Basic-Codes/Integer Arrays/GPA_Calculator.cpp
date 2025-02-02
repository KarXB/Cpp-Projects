#include <iostream>
#include <string>
using namespace std;

// Function to convert marks to GPA directly
double convertToGradePoint(double marks, double maxMarks) {
    return ((marks / maxMarks) * 4);
}

int main() {
    int numSubjects;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;  // Get the number of subjects

    double maxMarks;
    cout << "Enter maximum marks for the subjects: ";
    cin >> maxMarks;  // Get the maximum marks for the subjects

    double totalGradePoints = 0, totalCredits = 0;
    string subject[numSubjects];
    string grade[numSubjects];
    double gradePoint[numSubjects];
    double marks[numSubjects];
    double creditHours[numSubjects];
    double percentage[numSubjects];

    for (int i = 0; i < numSubjects; i++) {
        cout << endl << "Enter the name for subject " << (i + 1) << ": ";
        cin >> subject[i];  // Get name for the subject
        
        cout << "Enter marks for " << subject[i] << ": ";
        cin >> marks[i];  // Get marks for the subject
        
        cout << "Enter credit hours for this subject: ";
        cin >> creditHours[i];  // Get credit hours for the subject

        // Calculate grade point using the formula (marks/maxMarks) * 4
        gradePoint[i] = convertToGradePoint(marks[i], maxMarks);  

        totalGradePoints += gradePoint[i] * creditHours[i];  // Accumulate total grade points
        totalCredits += creditHours[i];  // Accumulate total credits
    }

    // Check for division by zero (no subjects or credits)
    if (totalCredits == 0) {
        cout << "Total credit hours can't be zero." << endl;
    } else {
        double gpa = totalGradePoints / totalCredits;  // Calculate GPA
        cout << endl << "Your GPA is: " << gpa << endl;
    }


    // Display GPA and Grade for each subject
    for (int i = 0; i < numSubjects; i++) {
        cout << "GPA for Subject " << (i + 1) << " (" << subject[i] << "): " << gradePoint[i] << endl; 

        percentage[i] = marks[i] / maxMarks;      
        
        if (percentage[i] >= 90) {
            grade[i] == "A";
        }
        else if (percentage[i] >= 85) {
            grade[i] == "A-";
        }
        else if (percentage[i] >= 80) {
            grade[i] == "B+";
        }
        else if (percentage[i] >= 75) {
            grade[i] == "B";
        }
        else if (percentage[i]>= 70) {
            grade[i] == "B-";
        }
        else if (percentage[i] >= 65) {
            grade[i] == "C+";
        }
        else if (percentage[i] >= 60) {
            grade[i] == "C";
        }
        else if (percentage[i] >= 55) {
            grade[i] == "C-";
        }
        else if (percentage[i] >= 50) {
            grade[i] == "D";
        }
        else{
            grade[i] == "F";
        }

        cout << "Grade for Subject " << (i + 1) << " (" << subject[i] << "): " << grade[i] << endl; 
}