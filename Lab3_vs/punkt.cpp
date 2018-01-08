#pragma once
#include "stdafx.h"
#include "Punkt.h"
using namespace std;



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


