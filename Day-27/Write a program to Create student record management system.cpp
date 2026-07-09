// Write a program to Create student record management system.



#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student s[100];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> s[i].rollNo;

        cout << "Enter Name: ";
        cin >> s[i].name;

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Records\n";

    for(int i = 0; i < n; i++) {
        cout << "\nRoll Number: " << s[i].rollNo;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }

    return 0;
}