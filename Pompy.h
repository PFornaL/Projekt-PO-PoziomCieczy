#pragma once
#include <string>


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

class Pompy
{
public:
	bool stan_p1;
	bool stan_p2;
	bool stan_p3;
	bool s_awaria_p1;
	bool s_awaria_p2;
	bool s_awaria_p3;

	void zmien_stan_p();//Zmienia stan pompy
	void wyswietl_awaria_p();//Wyœwietla awarie pompy
};

