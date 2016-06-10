#include "sterowanie.h"

void Sterowanie::start_proced()
{
	syg_dzialania = false;
	
	MessageBox::Show("Kontrola cieczy zbiornika aktywna ");
	if (syg_dzialania == true)
	{
		MessageBox::Show("Kontrola cieczy zbiornika aktywna ");
	}
	else if (syg_dzialania == false)
	{
		MessageBox::Show("Kontrola cieczy zbiornika nieaktywna ");
	};
};

void Sterowanie::procedura()
{
POCZ:
	if (stan_s1 == true && stan_s3 == true)
	{
		stan_p1 = true;
		stan_s2 = true;
	}
	else if (stan_s1 == true && stan_s3 == false && stan_s2 == true)
		stan_p1 = true;
	else if (stan_s1 == false && stan_s3 == false)
	{
		stan_p1 = false;
		stan_s2 = false;
	}
	else if (stan_s1 == true && stan_s3 == false && stan_s2 == false)
		stan_p1 = false;


goto: POCZ
return 0 
};



