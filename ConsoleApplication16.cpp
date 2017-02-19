#include "stdafx.h"
#include "iostream"
#include "string"
#include "cmath"
#include "Header.h"
using namespace std;
char wybor;
Wielokat *tab[11];
Prostokat tabP[11];
Kwadrat tabK[11];
Trojkat tabT[11];
Trapez tabZ[11];
Romb tabR[11];
Deltoid tabD[11];
Rownoleglobok tabA[11];
Okrag tabO[11];
int licznik = 0;
float suma = 0.0;
void case1() {
	tabP[licznik].kon_pros();
	tab[licznik] = &tabP[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case2() {
	tabK[licznik].kon_kwa();
	tab[licznik] = &tabK[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case3() {
	tabT[licznik].kon_tro();
	tab[licznik] = &tabT[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case4() {
	tabZ[licznik].kon_trap();
	tab[licznik] = &tabZ[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case5() {
	tabD[licznik].kon_delt();
	tab[licznik] = &tabD[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case6() {
	tabR[licznik].kon_romb();
	tab[licznik] = &tabR[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case7() {
	tabA[licznik].kon_rown();
	tab[licznik] = &tabA[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case8() {
	tabO[licznik].kon_ok();
	tab[licznik] = &tabO[licznik];
	cout << tab[licznik]->obwod() << endl;
	licznik++;
}
void case9(){
	int i;
	for (i = 0; i < licznik; i++) {
		suma += tab[i]->obwod();
	}
	cout << "Suma obwodow jest rowna: " << suma << endl;
}
int main()
{
	do {
		cout << "Wybierz: \n";
		cout << "1. Aby stworzyc prostokat\n";
		cout << "2. Aby stworzyc kwadrat\n";
		cout << "3. Aby stworzyc trojkat\n";
		cout << "4. Aby stworzyc trapez\n";
		cout << "5. Aby stworzyc deltoid\n";
		cout << "6. Aby stworzyc romb\n";
		cout << "7. Aby stworzyc rownoleglobok\n";
		cout << "8. Aby stworzyc okrag\n";
		cout << "9. Aby zsumowac obwody wszystkich figur\n";
		cout << "0. Aby wyjsc\n";
		cin >> wybor;
		switch (wybor) {
		case '1':
			case1();
			break;
		case '2':
			case2();
			break;
		case '3':
			case3();
			break;
		case '4':
			case4();
			break;
		case '5':
			case5();
			break;
		case '6':
			case6();
			break;
		case '7':
			case7();
			break;
		case '8':
			case8();
			break;
		case '9':
			case9();
			break;
		}
	} while (wybor != '0');
    return 0;
}