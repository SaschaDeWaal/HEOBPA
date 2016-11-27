#pragma once

#include <iostream>
#include <ctime>

class Transactie{


public:
	enum TransactionTypes { Unknown = 0, Incoming = 1, Outgoing = 2 };
	Transactie(TransactionTypes type, int amount, time_t date);

	const TransactionTypes GetType() const;
	const int GetAmount() const;
	const time_t GetDate() const;

private:
	TransactionTypes type = Unknown;
	int amount = 0;
	time_t date;

};

