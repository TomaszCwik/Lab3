// Lab3_vs.cpp : Defines the entry point for the console application.
// jeżeli jako argument do dodaj(Punkt &) podamy wektor nie zostanie dodany kąt alfa oraz długość wektora
// wywoływać w dodaj(PUNKT&) konstruktor z klasy wektor który "zapisze" nam kąt i długość
#include "stdafx.h"
#include <cstdlib>
using namespace std;
int main()
{
	Wektor pierwszy	(1,	 1,	 1,  45);
	Wektor drugi	(5,	 10, 10, 75); 
	Wektor trzeci	(1,  2,	 14, 290);
	Wektor czwarty	(15, 10, 4,  75);
	pierwszy.wk();
	drugi.wk();
	trzeci.wk();
	czwarty.wk();
	system("pause");
	return 0;
}

