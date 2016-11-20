#include "stdafx.h"
#include "Bankrekening.h"
#include "Transactie.h"

Bankrekening::Bankrekening(int balance, std::list<Transactie> transactions){
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

const std::list<Transactie> Bankrekening::GetTransactions() const {
	return this->transactions;
}