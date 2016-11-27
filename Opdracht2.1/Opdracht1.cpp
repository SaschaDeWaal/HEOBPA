// Opdracht1.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <ctime>
#include "stdafx.h"
#include "Transactie.h"
#include "Bankrekening.h"

using namespace std;

int main(){

	Bankrekening bankAccount = Bankrekening(1000);
	cout << "bank account has now " << bankAccount.GetBalance() << " cents \n";

	bankAccount = bankAccount + Transactie(Transactie::Incoming, 100, time(0));
	cout << "bank account has now " << bankAccount.GetBalance() << " cents \n";

	bankAccount = bankAccount + Transactie(Transactie::Outgoing, 500, time(0));
	cout << "bank account has now " << bankAccount.GetBalance() << " cents \n";

	cout << bankAccount << endl;


	int i; std::cin >> i;
    return 0;
}


