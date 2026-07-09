#include <iostream>
using namespace std;

int main() {
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n----- Marksheet -----\n";
    cout << "Name: " << name << endl;
    cout << "Subject 1: " << m1 << endl;
    cout << "Subject 2: " << m2 << endl;
    cout << "Subject 3: " << m3 << endl;
    cout << "Subject 4: " << m4 << endl;
    cout << "Subject 5: " << m5 << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Grade: A+";
    else if(percentage >= 80)
        cout << "Grade: A";
    else if(percentage >= 70)
        cout << "Grade: B";
    else if(percentage >= 60)
        cout << "Grade: C";
    else if(percentage >= 50)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
} 



