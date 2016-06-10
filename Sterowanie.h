#pragma once
#include <string>
#include "pompy.h"


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	class Sterowanie
	{
	public:
		bool syg_dzialania;

		void start_proced();
		void procedura();
		};

		