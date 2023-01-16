#include "derivLocator.h"

derivLocator::derivLocator(int seatsVIP, int seatsStandard) : Locator()
{
	if (seatsVIP > 0)
		this->seatsVIP = seatsVIP;
	if (seatsStandard > 0)
		this->seatsStandard = seatsStandard;
}

ostream& operator<<(ostream& out, derivLocator lc)
{
	out << "              *****************       SCREEN       *****************" << endl;
	out << endl;
	for (int i = 0; i < lc.getNoRowsVIPZone(); i++)
	{
		out << "      VIP Row " << i + 1 << " ";
		for (int j = 1; j <= lc.noSeatsRowVIPZone[i]; j++)
			out << "[" << j << "]" << " ";
		out << endl;
	}
	for (int i = 0; i < lc.noRowsStandardZone; i++)
	{
		out << " STANDARD Row " << i + 1 << " ";
		for (int j = 1; j <= lc.noSeatsRowStandardZone[i]; j++)
			out << "[" << j << "]" << " ";
		out << endl;
	}
	return out;
}