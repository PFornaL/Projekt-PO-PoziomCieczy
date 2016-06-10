#pragma once
#include <string>


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	class Czujniki
	{
	public:
		bool stan_s1;
		bool stan_s2;
		bool stan_s3;

		void zmien_stan();//Zmienia stan czujników
		void wyswietl_awaria();//Wyœwietla awarie czujnika
		};

		