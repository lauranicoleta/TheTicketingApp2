#pragma once
#include "Locator.h"
#include "Ticket.h"

class derivLocator : public Locator
{
private:
	int seatsVIP;
	int seatsStandard;

	Ticket t;
public:
	derivLocator();
	derivLocator(int seatsVIP, int seatsStandard);

	friend ostream& operator<<(ostream& out, derivLocator lc);

};