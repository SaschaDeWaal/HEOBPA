#pragma once

#include <vector>;
#include "transactie.h";
#include <ostream>;

using namespace std;

class Bankrekening{
public:
	Bankrekening(int balance, vector<Transactie> transactions = vector<Transactie>());

	Bankrekening operator+(const Transactie& transaction) const;

	friend ostream& operator << (ostream& os, const Bankrekening& bankrekening);


	void AddTransaction(Transactie transaction);
	void AddBalance(int amount);

	const int GetBalance() const;
	const vector<Transactie> GetTransactions() const;


private:
	int balance = 0;
	std::vector<Transactie> transactions;
};

