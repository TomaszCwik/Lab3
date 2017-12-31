#include "stdafx.h"
#include "Punkt.h"
#include <iostream>
using namespace std;

Punkt::Punkt(float PunktX, float PunktY)
{
	//cout << "Wywolano kunstruktor z parametrami" << endl;
	this->x = PunktX;
	this->y = PunktY;
}
Punkt::Punkt(Punkt& p1)
{
	//cout << "Wywolano kunstruktor kopiujacy" << endl;
	this->x = p1.x;
	this->y = p1.y;
}
void Punkt::dodaj(Punkt &nowy)
{
	//cout << "Wywolano dodawanie" << endl;
	this->x += nowy.x;
	this->y += nowy.y;
}
void Punkt::dodaj(Punkt *nowy)
{
	//cout << "Wywolano dodawanie" << endl;
	this->x += nowy->x;
	this->y += nowy->y;
}
void Punkt::drukuj()
{	
	cout << "X: " << this->x<<" "<< "Y: " << this->y << endl;;
}
float Punkt::pobierzX()
{
	return this->x;
}
float Punkt::pobierzY()
{
	return this->y;
}
bool  Punkt::operator ==(Punkt &p1)
{
	cout << "Wywolano operator==" << endl;

if (this->x==p1.x||this->y==p1.y)
	{
	return true;
	}
return false;
}
Punkt Punkt::operator+=(Punkt &p1)
{
	Punkt temp;
	cout << "Wywolano operator+=" << endl;
	temp.x	=	this->x += p1.x;
	temp.y	=	this->y += p1.y;
	return temp;
}
Punkt Punkt::operator=(const Punkt &p1)
{
	//cout << "Wywolano operator=" << endl;
	this->x = p1.x;
	this->y = p1.y;
	return * this;
}
Punkt Punkt::operator+(Punkt &p1)
{
	Punkt temp;
	cout << "Wywolano operator+" << endl;
	temp.x = this->x + p1.x;
	temp.y = this->y + p1.y;
	return temp;

}
ostream& operator<<(ostream& out, Punkt p)
{
	out << "X: " << p.x << " " << "Y: " << p.y << endl;
	return out;
}
Punkt::~Punkt()
{
	// cout << "Destruktor"<<endl;
}


 Tablica::Tablica(int dl ) // tworzy Tablice o zadanej d³ugoœci i wype³nia punktami (0,0)  (1p)
 {
 this->dl = dl;
 if  (dl > 0)
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
Tablica::Tablica(float *x, float *y,int dl)
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
	{	if ( (this->w[i].pobierzX() != w.w[i].pobierzX())||( this->w[i].pobierzY() != w.w[i].pobierzY()))
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

	if (t1.dl> 0)
		{	
		//delete this->w; //(powoduje wyciek Pamiêci)
		this->w = new Punkt[t1.dl];
			
		for (int i = 0; i <= this->dl; i++)
			{
				this->w[i] = t1.w[i];
			}
			return t1;
		}


}
