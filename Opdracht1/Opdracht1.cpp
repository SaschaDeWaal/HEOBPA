// Opdracht1.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <ctime>
#include "stdafx.h"
#include "Transactie.h"
#include "Bankrekening.h"

int main(){

	Bankrekening bankAccount = Bankrekening(1000);
	std::cout << "bank account has now " << bankAccount.GetBalance() << " cents \n";

	bankAccount = bankAccount + Transactie(Transactie::Incoming, 100, time(0));
	std::cout << "bank account has now " << bankAccount.GetBalance() << " cents \n";

	bankAccount = bankAccount + Transactie(Transactie::Outgoing, 500, time(0));
	std::cout << "bank account has now " << bankAccount.GetBalance() << " cents \n";


	int i; std::cin >> i;
    return 0;
}


