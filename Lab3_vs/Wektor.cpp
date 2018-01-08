#pragma once
#include "stdafx.h"
using namespace std;

Wektor::Wektor(float x = 0, float  y = 0, float  d = 0, float  alfa = 0) : Punkt(x, y)
{
	this->d = d;
	this->alfa = alfa;

}

void Wektor::wk() 
{ 
	float x = this->pobierzX();
	float y = this->pobierzY();
	float a = (sin(alfa))*d;
	float b = sqrt((d*d) - (a*a));
	
	if (alfa >= 0.0 && alfa < 90)		 //1 æwiartka
	{ 
		x += b;
		y += a;
	}
	else if (alfa >= 90 && alfa < 180.0 ) //2 æwiartka
	{
		x -= b;
		y += a;
	}
	else if (alfa >= 180 && alfa < 270) // 3 æwiartka
	{
		x -= b;
		y -= a;
	}
	else								//4 æwiartka
	{ 
		x += b;
		y -= a;
	}
	cout << "Koniec znajduje sie w X : " << x << " Y :" << y << endl;
}



Wektor::~Wektor()
{
}
