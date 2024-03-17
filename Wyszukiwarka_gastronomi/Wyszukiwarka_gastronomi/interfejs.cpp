#include"interfejs.h"

void interfejs_wyszukiwarka(std::vector<restauracja> ref) {
	int wybor;
	std::string nazwa;
	std::cout << "podaj nazwe" << std::endl;
	std::cin >> nazwa;
	
	find(ref, nazwa);


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

std::vector<restauracja> interfejs_przegladaj() {
	int wybor;


	std::vector<restauracja> ref = read();

	std::cout << ref[0].get_nazwa() << std::endl;
	

	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	if (wybor == 0) {
		
		interfejs();
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}
	return ref;
}

void interfejs() {
	int wybor;
	std::vector<restauracja> ref;
	std::cout << "Witaj w wyszukiwarce gastronomi" << std::endl;
	std::cout << "1: Wyszukaj po nazwie" << std::endl;
	std::cout << "2: Dodaj nowa restauracje" << std::endl;
	std::cout << "3: Filtry" << std::endl;
	std::cout << "4: Przegladaj" << std::endl;
	
	

	std::cin >> wybor;
	switch (wybor) {
	case 1:
		interfejs_wyszukiwarka(ref);
		break;
	case 2:
		interfejs_dodaj();
		break;
	case 3:
		interfejs_filtry();
		break;
	case 4:
	{
		std::vector<restauracja> ref = interfejs_przegladaj();
		break;
	}
	default:
		std::cout << "podano zly numer" << std::endl;
		interfejs();
		break;
	}
	
}
