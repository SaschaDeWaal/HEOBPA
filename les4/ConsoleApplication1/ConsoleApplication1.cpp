// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>;
#include <string>;
#include <vector>;
#include <float.h>;

#include "Collector.h";

using namespace std;

template<typename T, typename U>
auto multiply(T first, U second) -> decltype(first*second){
	return first*second;
}

int main() {

	//--voorbeeld 1--
	cout << "--voorbeeld 1--" << endl;

	auto i = 15;
	auto pietje = "pietje";
	auto result1 = multiply<int, float>(15, 237.5);

	cout << "type (i): " << typeid(i).name() << endl;
	cout << "type (pet)" << typeid(pietje).name() << endl;

	cout << "type (result1)" << typeid(result1).name() << endl;

	//--voorbeeld 2--
	cout << endl <<  "--voorbeeld 2--" << endl;

	Collector<int> collectorInt;
	collectorInt.add(34);
	collectorInt.add(21);
	collectorInt.add(76);

	collectorInt.dump();

	Collector<string> collectorVector;
	collectorVector.add("world");
	collectorVector.add("hello");
	collectorVector.add("bye");

	collectorVector.dump();




	int exit = 0;
	cin >> exit;

    return exit;
}

