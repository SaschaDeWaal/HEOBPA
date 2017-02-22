#include "stdafx.h"
#include <iostream>
#include <string>
#include "Parent.h"

using namespace std;

//Voeg een functie toe die de Parent als parameter heeft
//Note: snapte dit niet helemaal. Maar hoop dat dit klopt
void randomFunction(const Parent parent) {
	cout << "Deze functie heeft een parent " << parent << endl;
}

int main() {

	//create shared parent
	Parent *p1 = new Parent();
	p1->name = "parent1";
	p1->child = make_unique<Child>();
	cout << "First parent" << *p1 << endl;

	//move parent
	Parent p2 = std::move(*p1);
	cout << "moved: " << p2 << endl;

	//Wanneer je de regel uitcommit, krijg je een error want p1 bestaat niet meer
	//cout << "First pointer" << *p1 << endl;

	//Voeg een functie toe die de Parent als parameter heeft
	randomFunction(p2);


	//wait for exit
	int exitCode = 0;
	cin >> exitCode;
	return exitCode;
}