#pragma once
#include "stdafx.h"
#include "iostream"
#include "string"
#include "cmath"
using namespace std;
class Wielokat {
public:
	int a;
	virtual float obwod() = 0;
};
class Trojkat :public virtual Wielokat {
	int b, c;
public:
	virtual float obwod();
	void kon_tro();
};
class Kwadrat :public virtual Wielokat {
public:
	virtual float obwod();
	void kon_kwa();
};
class Prostokat :public virtual Wielokat {
	int b;
public:
	virtual float obwod();
	void kon_pros();
};
class Trapez :public virtual Wielokat {
	int b, c, d;
public:
	virtual float obwod();
	void kon_trap();
};
class Deltoid :public virtual Wielokat {
	int b;
public:
	virtual float obwod();
	void kon_delt();
};
class Romb :public virtual Wielokat {
public:
	virtual float obwod();
	void kon_romb();
};
class Rownoleglobok :public virtual Wielokat {
	int b;
public:
	virtual float obwod();
	void kon_rown();
};
class Okrag :public virtual Wielokat {
public:
	virtual float obwod();
	void kon_ok();
};
//aaaaaaaaaaa