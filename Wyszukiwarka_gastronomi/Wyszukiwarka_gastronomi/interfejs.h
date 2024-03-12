#pragma once
#include<iostream>
void interfejs();

void interfejs_wyszukiwarka() {
	int wybor;


	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	if (wybor == 0) {
		interfejs();
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}
}

void interfejs_dodaj() {
	int wybor;



	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	if (wybor == 0) {
		interfejs();
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}
}

void interfejs_filtry() {
	int wybor;
	std::cout << "wybierz rodzaj filtru" << std::endl;
	std::cout << "1: cena w gore " << std::endl;
	std::cout << "2: cena w dol" << std::endl;
	std::cout << "3: ocena" << std::endl;
	std::cout << "4: rodzaj kuchni(kraj)" << std::endl;

	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;

	switch (wybor) {
	case 0:
		interfejs();
		break;
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	default:
		std::cout << "podano zly numer" << std::endl;
		break;
	}


}

void interfejs_przegladaj() {
	int wybor;



	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	if (wybor == 0) {
		interfejs();
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}
}


void interfejs() {
	int wybor;
	std::cout << "Witaj w wyszukiwarce gastronomi" << std::endl;
	std::cout << "1: Wyszukaj po nazwie" << std::endl;
	std::cout << "2: Dodaj nowa restauracje" << std::endl;
	std::cout << "3: Filtry" << std::endl;
	std::cout << "4: Przegladaj" << std::endl;

	std::cin >> wybor;
	switch (wybor) {
	case 1:
		interfejs_wyszukiwarka();
		break;
	case 2:
		interfejs_dodaj();
		break;
	case 3:
		interfejs_filtry();
		break;
	case 4:
		interfejs_przegladaj();
		break;
	default:
		std::cout << "podano zly numer" << std::endl;
		interfejs();
		break;
	}
}

