#pragma once
#include "stdafx.h"
#include "iostream"
#include "string"
#include "cmath"
using namespace std;
class Wielokat {
public:
	virtual int obwod() = 0;
};
class Trojkat :public virtual Wielokat {
	int a, b, c;
public:
	int obwod();
	Trojkat(int=0, int=0, int=0);
	void kon_tro();
	void walidacja(int &a);
};
class Kwadrat :public virtual Wielokat {
	int a;
public:
	int obwod();
	Kwadrat(int=0);
	void kon_kwa();
};
class Prostokat :public virtual Wielokat {
	int a, b;
public:
	virtual int obwod();
	Prostokat(int =0, int =0);
	void kon_pros();
};