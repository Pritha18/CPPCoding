
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

	Person() {
		firstName = "";
		lastName = "";
		age = 0;
		weight = 0;
	}

	Person(string firstName, string lastName, int age, double weight) {
		this -> firstName = firstName;
		this -> lastName = lastName;
		this -> age = age;
		this -> weight = weight;
	}
};


// we can also use user-defined data type inside a structure
// logical part
struct Pritha
{
	Person person;
	bool isSingle;

	Pritha() {
		person = Person("", "", 0, 0);
		isSingle = true;
	}

	Pritha(Person person, bool isSingle) {
		// this pointer is pointing to the variable's address
		// now you can ask, vaiya lot's of variable will be declared of Pritha type
		// in this case both imran and sakib is using this constructor
		// then who is using this pointer?
		// actually they both are using this pointer 

		// when we are doing operation regarding imran variable,
		// at that moment this pointer is pointing to the imran variable's address


		// when we are doing operation regarding sakib variable,
		// at that moment this pointer is pointing to the sakib variable's address
		this -> person = person;
		this -> isSingle = isSingle;
	}
};

void displayPritha(Pritha person) {
	cout << "First name: " << person.person.firstName << endl;
	cout << "Last name: " << person.person.lastName << endl;
	cout << "age: " << person.person.age << endl;
	cout << "weight: " << person.person.weight << endl;
	cout << "Is single: " << (person.isSingle ? "Yes" : "No") << endl;

	cout << endl;
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

	Pritha imran(Person("Imran", "Hossain", 30, 62), false);
	
	displayPritha(imran);

	Pritha sakib(Person("Pritha", "Hossain", 23, 50), false);
	
	displayPritha(sakib);

	return 0;
}