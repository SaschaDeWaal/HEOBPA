#pragma once

#include <list>
#include "transactie.h"

class Bankrekening{
public:
	Bankrekening(int balance, std::list<Transactie> transactions = std::list<Transactie>());

	Bankrekening operator+(const Transactie& transaction) const;

	void AddTransaction(Transactie transaction);
	void AddBalance(int amount);

	const int GetBalance() const;
	const std::list<Transactie> GetTransactions() const;
private:
	int balance = 0;
	std::list<Transactie> transactions;
};

