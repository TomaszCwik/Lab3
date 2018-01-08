#pragma once
#include "stdafx.h"

using namespace std;


Tablica::Tablica(int dl) // tworzy Tablice o zadanej d³ugoœci i wype³nia punktami (0,0)  (1p)
{
	this->dl = dl;
	if (dl > 0)
	{
		this->w = new Punkt[dl];
	}
	else
	{
		w = NULL;
	}
}
Tablica::Tablica(Tablica& w_)
{
	this->dl = w_.dl;
	if (this->dl > 0)
	{
		this->w = new Punkt[dl];
		for (int i = 0; i < this->dl; i++)
		{
			w[i] = w_.w[i];
		}
	}
}
Tablica::Tablica(float *x, float *y, int dl)
{
	this->dl = dl;
	if (dl > 0)
	{
		w = new Punkt[dl];
		for (int i = 0; i < dl; i++)
		{
			w[i].dodaj(Punkt(x[i], y[i]));
		}
	}
}
Tablica::~Tablica()
{
	delete[] w;
	w = NULL;
}
void Tablica::dodaj(Tablica &w_)
{
	this->w = new Punkt[dl];
	for (int i = 0; i < this->dl; i++)
	{
		this->w[i] = w_.w[i];
	}

}
bool Tablica::porownaj(Tablica &w)
{
	for (int i = 0; i < dl; i++)
	{
		if ((this->w[i].pobierzX() != w.w[i].pobierzX()) || (this->w[i].pobierzY() != w.w[i].pobierzY()))
		{
			return false;
		}

	}
	return true;

}
void Tablica::wypisz()
{
	for (int i = 0; i <= dl; i++)
	{
		cout << i << " : ";
		w->drukuj();
	}
	cout << endl;
}
bool Tablica::operator==(Tablica &t1)
{
	if (this->dl == t1.dl)
	{
		for (int i = 0; i <= dl; i++)
		{
			if (this->w->pobierzX() != t1.w->pobierzX())
			{
				return false;
			}
		}

		return true;
	}
	else
	{
		return false;
	}
}
Tablica Tablica::operator=(Tablica &t1)
{
		return 0;
}
