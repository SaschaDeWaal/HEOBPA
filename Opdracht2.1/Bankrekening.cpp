#include "stdafx.h"
#include "Bankrekening.h"
#include "Transactie.h"

Bankrekening::Bankrekening(int balance, std::vector<Transactie> transactions){
	this->balance = balance;
}

Bankrekening Bankrekening::operator+(const Transactie& transaction) const {
	Bankrekening newBankAccount = Bankrekening(this->balance, this->transactions);
	newBankAccount.AddTransaction(transaction);
	
	if (transaction.GetType() == Transactie::Incoming) {
		newBankAccount.AddBalance(transaction.GetAmount());
	}
	else if (transaction.GetType() == Transactie::Outgoing) {
		newBankAccount.AddBalance(transaction.GetAmount() * -1);
	}

	return newBankAccount;
}

void Bankrekening::AddTransaction(Transactie transaction) {
	this->transactions.push_back(transaction);
}

void Bankrekening::AddBalance(int amount) {
	this->balance += amount;
}

const int Bankrekening::GetBalance() const{
	return this->balance;
}

const std::vector<Transactie> Bankrekening::GetTransactions() const {
	return this->transactions;
}

ostream & operator<<(ostream & os, const Bankrekening & bankrekening) {
	std::vector<Transactie> transactions = bankrekening.GetTransactions();

	os << "Bankrekening saldo: " << bankrekening.GetBalance() << "\n";

	for (int i = 0; i < transactions.size(); i++) {
		os << "   " << transactions[i].GetDate() << "   " << transactions[i].GetType() << "   " << transactions[i].GetAmount() << "\n";
	}

	return os;
}
