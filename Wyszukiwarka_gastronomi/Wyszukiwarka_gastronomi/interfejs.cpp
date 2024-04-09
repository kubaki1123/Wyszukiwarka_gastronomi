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

void interfejs_filtry(std::vector<restauracja>ref) {
	int wybor;
	std::cout << "wybierz rodzaj filtru" << std::endl;
	std::cout << "1: cena w gore " << std::endl;
	std::cout << "2: cena w dol" << std::endl;
	std::cout << "3: ocena w gore" << std::endl;
	std::cout << "4: ocena w dol" << std::endl;
	std::cout << "5: rodzaj kuchni(kraj)" << std::endl;

	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;

	switch (wybor) {
	case 0:
		interfejs();
		break;
	case 1:
		cena_w_gore(ref);
		break;
	case 2:
		cena_w_dol(ref);
		break;
	case 3:
		ocena_w_gore(ref);
		break;
	case 4:
		ocena_w_dol(ref);
		break;
	case 5:

		break;
	default:
		std::cout << "podano zly numer" << std::endl;
		break;
	}


}

void print_all(std::vector<restauracja> ref)
{
	kategorie kategorie;
	std::cout << kategorie.nazwa_kat << '\t' << kategorie.cena_kat << '\t' << kategorie.ocena_kat << '\t' << kategorie.rodzaj_kuchni_kat << '\t' << std::endl;

	for (int i = 0; i < ref.size(); i++) {
		std::cout << ref[i].get_nazwa() << '\t' << ref[i].get_cena() << '\t' << ref[i].get_ocena() << '\t' << ref[i].get_rodzaj() << std::endl;
	}
}

void interfejs_przegladaj(std::vector<restauracja>ref) {
	int wybor;

	print_all(ref);
	
	

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
	static std::vector<restauracja> ref=read();
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
		interfejs_filtry(ref);
		break;
	case 4:
	{
		interfejs_przegladaj(ref);
		
		break;
	}
	default:
		std::cout << "podano zly numer" << std::endl;
		interfejs();
		break;
	}
	
}
