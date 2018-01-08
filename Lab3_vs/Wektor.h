#pragma once
#include "stdafx.h"

using namespace std;

class Wektor :public Punkt
{
private:
	float d;
	float alfa;
public:
	void wk();				//która zwraca wspó³rzêdne koñca wektora wyliczone na podstawie x,y,d,alfa. (2p)
	Wektor(float x, float  y, float  d, float  alfa);
	
~Wektor();
};
