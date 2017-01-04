// Opdracht5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <algorithm>
#include <string> 
#include <numeric>

#include <iostream>
#include <vector>

using namespace std;

void toUpper(string str) {
	std::transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout << str << endl;
}

bool is_negative(int i) {
	return i < 0;
}

bool is_odd(int i){
	return (i % 2) != 0;
}


void printString(string str) {
	cout << str << endl;
}

void printDouble(double str) {
	cout << str << endl;
}


int main() {
	vector<string> colours{ "red", "green", "blue", "orange", "green", "orange", "black", "purple" };

	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector)
	// - de vector in 1 nieuwe vectoren te splitsen, 1 met alles voor 'purple', 1 met alles er na
	cout << endl << "--de vector in 1 nieuwe vectoren te splitsen, 1 met alles voor 'purple', 1 met alles er na.--" << endl;
	int pos = find(colours.begin(), colours.end(), "purple") - colours.begin();

	vector<string> coloursPartOne(colours.begin(), colours.begin() + pos);
	vector<string> coloursPartTwo(colours.begin() + pos, colours.end());
	for_each(coloursPartOne.begin(), coloursPartOne.end(), printString);
	for_each(coloursPartTwo.begin(), coloursPartTwo.end(), printString);


	// - alle elementen UPPERCASE te maken.
	cout << endl << "--alle elementen UPPERCASE te maken.--" << endl;
	vector<string> upperCase = colours;
	for_each(upperCase.begin(), upperCase.end(), toUpper);	

	// - alle dubbele te verwijderen  
	cout << endl << "--alle dubbele te verwijderen--" << endl;
	vector<string> erased = colours;
	sort(erased.begin(), erased.end());
	erased.erase(unique(erased.begin(), erased.end()), erased.end());
	for_each(erased.begin(), erased.end(), printString);

	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een NIEUWE copie van deze vector)
	vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635, -53 };

	// - alle negatieve elementen te verwijderen
	cout << endl << "--alle negatieve elementen te verwijderen--" << endl;
	vector<double> withoutNegative = numbers;
	withoutNegative.erase(std::remove_if(withoutNegative.begin(), withoutNegative.end(), is_negative), withoutNegative.end());
	for_each(withoutNegative.begin(), withoutNegative.end(), printDouble);

	// - voor alle elementen te bepalen of ze even of oneven zijn
	cout << endl << "--voor alle elementen te bepalen of ze even of oneven zijn--" << endl;
	vector<double> oddNumbers = numbers;
	oddNumbers.erase(std::remove_if(oddNumbers.begin(), oddNumbers.end(), is_odd), oddNumbers.end());
	for_each(oddNumbers.begin(), oddNumbers.end(), printDouble);

	// - de som, het gemiddelde, en het product van alle getallen te berekenen
	cout << endl << "--de som, het gemiddelde, en het product van alle getallen te berekenen--" << endl;
	vector<double> calNumbers = numbers;
	double sum = std::accumulate(calNumbers.begin(), calNumbers.end(), 0);
	double average = sum / calNumbers.size();

	cout << "sum: " << sum << endl;
	cout << "average: " << calNumbers.size() << endl;

	int exitCode = 0;
	cin >> exitCode;
	return exitCode;
}
