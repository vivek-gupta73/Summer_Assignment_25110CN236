// Write a program to Create salary management system.


#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float basicSalary, bonus, totalSalary;
};

int main() {
    Employee e[100];
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of employee " << i + 1 << endl;

        cout << "Enter Employee ID: ";
        cin >> e[i].id;

        cout << "Enter Name: ";
        cin >> e[i].name;

        cout << "Enter Basic Salary: ";
        cin >> e[i].basicSalary;

        cout << "Enter Bonus: ";
        cin >> e[i].bonus;

        e[i].totalSalary = e[i].basicSalary + e[i].bonus;
    }

    cout << "\nSalary Records\n";

    for(int i = 0; i < n; i++) {
        cout << "\nEmployee ID: " << e[i].id;
        cout << "\nName: " << e[i].name;
        cout << "\nBasic Salary: " << e[i].basicSalary;
        cout << "\nBonus: " << e[i].bonus;
        cout << "\nTotal Salary: " << e[i].totalSalary << endl;
    }

    return 0;
}