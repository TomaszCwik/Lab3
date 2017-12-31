#include "stdafx.h"
#include <iostream>
using namespace std;
class Punkt
{
private:
	float x;
	float y;

public:
	Punkt(Punkt& przekazywany);
	Punkt(float x=0, float y=0);
	void dodaj(Punkt &p); 
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

	//Punkt operator<<(ostream & out, Punkt & p1);



};

class Tablica
{

private:
	Punkt * w;
	int dl;										// dlugoœæ Tablicy
public:

	Tablica(int dl );							// tworzy Tablice o zadanej d³ugoœci i wype³nia punktami (0,0)  (1p)
	void  wypisz();
	Tablica(Tablica &w_);						//inicjalizacja za pomoc¹ Tablicy w_ (2p)
	Tablica(float *x, float *y,int dl);			// inicjalizacja tablicy  punktów  tablicami x -ów i y -ów (2p)
	~Tablica();									// (1p)
	void dodaj(Tablica &w_);					// dodaje do siebie Tablice w_ (2p)
	bool porownaj(Tablica &w);					// porownaie z Tablica w_; (2p)
	bool operator==(Tablica &t1);
	Tablica operator=(Tablica &t1);

};