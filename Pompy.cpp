#include "pompy.h"

void Pompy::zmien_stan_p()
{
	stan_p1 = false;
	stan_p2 = false;
	stan_p3 = false;
	s_awaria_p1 = false;
	s_awaria_p2 = false;
	s_awaria_p3 = false;
	MessageBox::Show("Zmieniono wartoœci Pomp na domyœlne ");
};

void Pompy::wyswietl_awaria_p()
{
	if (s_awaria_p1 == true && s_awaria_p2 == false && s_awaria_p3 == false)
	{
		stan_p2 = true;
	}

	else if (s_awaria_p2 == true && s_awaria_p1 == false && s_awaria_p3 == false)
	{
		stan_p3 = true;
	}

	else if (s_awaria_p3 == true && s_awaria_p1 == false && s_awaria_p2 == false)
	{
		stan_p1 = true;
	}

	else if (s_awaria_p2 == true && s_awaria_p1 == true && s_awaria_p3 == true)
	{
		MessageBox::Show("AWARIA WSZYSTKICH POMP! ");
	};
};