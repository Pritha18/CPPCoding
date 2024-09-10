//17.2. Write a program that read and display some student's name, roll, and total mark using structure


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
    cout << "Name: " << student.name << endl;
    cout << "Roll: " << student.roll << endl;
    cout << "Total Marks: " << student.totalMarks << endl;
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Student student1;

    student1.name = "Raj";
    student1.roll = 400;
    student1.totalMarks = 95.5;

    displayStudent(student1);

    Student student2("Rai", 401, 90.0);
    displayStudent(student2);

    Student student3("Hrishu", 331, 96.0);
    displayStudent(student3);

    return 0;
}
