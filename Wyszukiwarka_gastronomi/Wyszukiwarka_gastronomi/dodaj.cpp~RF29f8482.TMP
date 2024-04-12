#include"dodaj.h"

void dodaj_restauracje() {
	AddRestauracja AddRestauracja;
	std::cout << "aby dodac restauracje podaj nastepujace rzeczy,nazwa:"<<std::endl;
	std::cout << "cena(jako znak $ od 1  do 3):" << std::endl;
	std::cout << "ocena(jako np. 5.0):" << std::endl;
	std::cout << "rodzaj(jako kraj pochodzenia):" << std::endl;
	std::cin >> AddRestauracja.nazwa >> AddRestauracja.cena >> AddRestauracja.ocena >> AddRestauracja.rodzaj;

	std::fstream plik;

	plik.open("baza_gastronomi.txt",std::ios_base::app);
		if (plik.is_open() == true) {
			std::cout << "plik otwarty" << std::endl;
		}
		
		plik << std::endl<< AddRestauracja.nazwa << ' ' << AddRestauracja.cena << ' ' << AddRestauracja.ocena << ' ' << AddRestauracja.rodzaj;

		plik.close();
}
