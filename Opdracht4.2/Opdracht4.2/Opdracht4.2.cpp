// Opdracht4.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LIFO.h"
#include <iostream>;
#include <string>

using namespace std;

int main()
{
	//--INT ---
	LIFO<int> a = LIFO<int>();
	a.push(32);
	a.push(23);
	a.push(12);
	a.pop();
	cout << "last: " << a.peek() << endl;

	//--STRING ---
	LIFO<string> b = LIFO<string>();
	b.push("hello");
	b.push("world");
	b.push("or hell");
	b.pop();
	cout << "last: " << b.peek() << endl;

	int exitCode = 0;
	cin >> exitCode;
    return exitCode;
}

