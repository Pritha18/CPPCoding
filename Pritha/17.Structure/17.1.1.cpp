//17.1.1 Write a program that read and display 
// any student's name, roll, and total mark using structure

#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    double totalMarks;

    Student() {
        name = "";
        roll = 0;
        totalMarks = 0.0;
    }

    Student(string name, int roll, double totalMarks) {
        this->name = name;
        this->roll = roll;
        this->totalMarks = totalMarks;
    }
};


void displayStudent(Student student) {
    cout << "Student Name: " << student.name << endl;
    cout << "Roll: " << student.roll << endl;
    cout << "Total Marks: " << student.totalMarks << endl;
}

int main(int argc, char const *argv[]) {
    Student stu;

    cout << "Enter student's name: ";
    getline(cin, stu.name);
    
    cout << "Enter student's roll: ";
    cin >> stu.roll;

    cout << "Enter student's total marks: ";
    cin >> stu.totalMarks;

    cout << "\nStudent Information:" << endl;

    displayStudent(stu);

    return 0;
}
