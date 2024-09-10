//17.3. Write a program that read and display basic information of a departments students using structure


#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int age;
    string department;
    double GPA;

    Student() {
        firstName = "";
        lastName = "";
        age = 0;
        department = "";
        GPA = 0.0;
    }

    Student(string firstName, string lastName, int age, string department, double GPA) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        this->department = department;
        this->GPA = GPA;
    }
};

void displayStudent(Student student) {
    cout << "First name: " << student.firstName << endl;
    cout << "Last name: " << student.lastName << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "GPA: " << student.GPA << endl;
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Student student1;
    student1.firstName = "A";
    student1.lastName = "S";
    student1.age = 20;
    student1.department = "Computer Science";
    student1.GPA = 3.8;

    displayStudent(student1);

    Student student2("B", "C", 22, "Electrical Engineering", 3.5);
    displayStudent(student2);

    Student student3("C", "K", 21, "Mechanical Engineering", 3.9);
    displayStudent(student3);

    return 0;
}
