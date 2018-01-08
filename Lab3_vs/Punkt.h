#pragma once
#include "stdafx.h"
using namespace std;
class Punkt
{
private:
	float x;
	float y;

public:
	Punkt wk(); //która zwraca wspó³rzêdne koñca wektora wyliczone na podstawie x,y,d,alfa. (2p)
	Punkt(Punkt& przekazywany);
	Punkt(float x = 0, float y = 0);
	void dodaj(Punkt &p); //Przedefiniowaæ metodê dodaj(Punkt &).(1p)
	void dodaj(Punkt *p);
	void drukuj();
	~Punkt();
	float pobierzX();
	float pobierzY();
	Punkt operator+=(Punkt &p1);
	Punkt operator=(const Punkt &p1);
	bool  operator==(Punkt &p1);
	Punkt operator+(Punkt &p1);
	friend ostream& operator<<(ostream&, Punkt);
};