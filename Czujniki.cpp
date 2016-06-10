#include "czujniki.h"

void Czujniki::zmien_stan()
{
	stan_s1 = false;
	stan_s2 = false;
	stan_s3 = false;
	MessageBox::Show("Zmieniono wartoœci czujników na domyœlne ");
};

void Czujniki::wyswietl_awaria()
{
	if (stan_s3 == false && stan_s2 == true)
	{
		MessageBox::Show("AWARIA! Naruszenie Czujnika! ");
	};

	if (stan_s3 == false && stan_s1 == true)
	{
		MessageBox::Show("AWARIA! Naruszenie Czujnika! ");
	};

};