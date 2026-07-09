// Write a program to Create employee management system.



#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    float salary;
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

        cout << "Enter Salary: ";
        cin >> e[i].salary;
    }

    cout << "\nEmployee Records\n";

    for(int i = 0; i < n; i++) {
        cout << "\nEmployee ID: " << e[i].id;
        cout << "\nName: " << e[i].name;
        cout << "\nSalary: " << e[i].salary << endl;
    }

    return 0;
}