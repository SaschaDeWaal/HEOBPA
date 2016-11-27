#include "stdafx.h"
#include "Transactie.h"


Transactie::Transactie(TransactionTypes type, int amount, time_t date){
	this->type = type;
	this->amount = amount;
	this->date = date;
}

const Transactie::TransactionTypes Transactie::GetType() const {
	return this->type;
}

const int Transactie::GetAmount() const {
	return this->amount;
}

const time_t Transactie::GetDate() const {
	return this->date;
}




