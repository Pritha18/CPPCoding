/*
	So, what is structure

	We all know that c++ has 5 fundamental data types
		1. integer - int
		2. floating point - float
		3. double sized floating point - double
		4. character - char
		5. boolean - bool

	But there is also way to declare user defined data types

	There are two ways to define user-defined data type in C++
		1. Structure - which is the base of Structural Programming/Procedural Programming
		2. Class - which is the base of Object Oriented Programming
*/

#include <iostream>
using namespace std;

// user fined data type name can be anything
// structures are like package
// here, this is package for person
// with this data type we can store a person's information
struct Person
{
	string firstName;
	string lastName;
	int age;
	double weight;
};

// we can also use user-defined data type inside a structure
struct Pritha
{
	Person person;
	bool isSingle;
};


void displayPritha(Pritha person) {
	cout << "First name: " << person.person.firstName << endl;
	cout << "Last name: " << person.person.lastName << endl;
	cout << "age: " << person.person.age << endl;
	cout << "weight: " << person.person.weight << endl;
	cout << "Is single: " << (person.isSingle ? "Yes" : "No") << endl;
}

int main(int argc, char const *argv[])
{
	Pritha promi;

	
	Person per;
	per.firstName = "Pritha";
	per.lastName = "Saha";
	per.age = 23;
	per.weight = 55;

	promi.person = per;
	promi.isSingle = true;

	displayPritha(promi);

	// there is no implicit constructor may be
	// Person sakib("Imran","Hossain", 30, 62);
	// Pritha imran(sakib, false);
	
	// Pritha imran(person: Person(firstName: "Imran", lastName: "Hossain", age: 30, weight: 62), isSingle: false);
	
	// next topic constructor
	return 0;
}