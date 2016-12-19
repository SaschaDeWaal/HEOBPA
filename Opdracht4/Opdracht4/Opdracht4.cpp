#include "stdafx.h"

#include <iostream>
#include <string>
#include "Parent.h"


using namespace std;

// LET OP: deze code compileert nu niet!! (waarom niet?...)
int main() {

	Parent* p1 = new Parent();
	p1->name = "parent1";
	p1->child = new Child("child1");

	cout << *p1 << endl;

	Parent* p2 = new Parent(*p1); // roept de copy constructor aan
	cout << *p2 << endl;

	cout << p1->child << " vs " << p2->child << endl;

	Parent* p3 = new Parent();
	p3->name = "parent3";
	p3->child = new Child("child3");

	cout << *p3 << endl;

	*p3 = *p1; // roept de assignment operator aan
	cout << *p3 << endl;

	
	int exitCode = 0;
	cin >> exitCode;

	return exitCode;
}