#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

void displayStudent(const Student& student) {
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
}

void createStudent(Student& student) {
    cout << "Enter name: ";
    cin >> student.name;
    cout << "Enter age: ";
    cin >> student.age;
}

void updateStudent(Student& student) {
    cout << "Enter new name: ";
    cin >> student.name;
    cout << "Enter new age: ";
    cin >> student.age;
}

void deleteStudent(Student& student) {
    student.name = "";
    student.age = 0;
}

int main() {
    Student student;

    int choice;
    do {
        cout << "1. Create Student" << endl;
        cout << "2. Display Student" << endl;
        cout << "3. Update Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createStudent(student);
                break;
            case 2:
                displayStudent(student);
                break;
            case 3:
                updateStudent(student);
                break;
            case 4:
                deleteStudent(student);
                cout << "Student record deleted." << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

