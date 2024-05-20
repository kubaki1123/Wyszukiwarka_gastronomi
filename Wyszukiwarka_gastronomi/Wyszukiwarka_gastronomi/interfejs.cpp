#include"interfejs.h"


void InterfejsWyszukiwarka:: interfejs(Node& ref) {
	int wybor;
	InterfejsInterfejs InterfejsInterfejs;
	std::string nazwa;
	std::cout << "podaj nazwe" << std::endl;
	std::cin >> nazwa;
	
	find(ref, nazwa);


	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	if (wybor == 0) {
		InterfejsInterfejs.interfejs(ref);
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}
}



void InterfejsFiltry:: interfejs(Node& ref) {
	int wybor;
	InterfejsInterfejs InterfejsInterfejs;
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
		InterfejsInterfejs.interfejs(ref);
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
	case 5: {
		std::string nazwa;
		std::cout << "podaj typ restauracji" << std::endl;
		std::cin >> nazwa;
		find_type(ref, nazwa);
		break;
	}
	default:
		std::cout << "podano zly numer" << std::endl;
		break;
	}


}

void print_all(Node& ref)
{
	kategorie kategorie;
	std::cout << kategorie.nazwa_kat << '\t' << kategorie.cena_kat << '\t' << kategorie.ocena_kat << '\t' << kategorie.rodzaj_kuchni_kat << '\t' << std::endl;

	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {

			std::cout << node->data.nazwa << '\t' << node->data.cena << '\t' << node->data.ocena << '\t' << node->data.rodzaj << std::endl;

		node = node->next;
	}
}
void print_all_miejsca(Node& ref) {
	
	
	srand(time(NULL));

	kategorie kategorie;
	std::cout << kategorie.nazwa_kat << '\t' << kategorie.cena_kat << '\t' << kategorie.ocena_kat << '\t' << kategorie.rodzaj_kuchni_kat << '\t' << std::endl;
	Node* node = new Node();
	node = &ref;

	while (node != nullptr) {

		std::cout << node->data.nazwa << '\t' << node->data.cena << '\t' << node->data.ocena << '\t' << node->data.rodzaj <<'\t' << rand() % 50 << std::endl;

		node = node->next;
	}
}

void InterfejsPrzegladaj:: interfejs(Node& ref) {
	int wybor;
	InterfejsInterfejs InterfejsInterfejs;
	print_all(ref);
	

	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	if (wybor == 0) {
		
		InterfejsInterfejs.interfejs(ref);
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}
	
}

void InterfejsDodaj:: interfejs(Node& ref) {
	int wybor;
	InterfejsInterfejs InterfejsInterfejs;

	dodaj_restauracje();


	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	
	if (wybor == 0) {
		InterfejsInterfejs.interfejs(ref);
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}
}

void InterfejsIloscMiejsc::interfejs(Node& ref) {

	int wybor;
	InterfejsInterfejs InterfejsInterfejs;
	print_all_miejsca(ref);


	std::cout << "powrot: 0" << std::endl;
	std::cin >> wybor;
	if (wybor == 0) {

		InterfejsInterfejs.interfejs(ref);
	}
	else {
		std::cout << "podano zly numer" << std::endl;
	}



}
void InterfejsInterfejs:: interfejs(Node& ref) {
	int wybor;
	
	InterfejsInterfejs InterfejsInterfejs;
	InterfejsWyszukiwarka InterfejsWyszukiwarka;
	InterfejsDodaj InterfejsDodaj;
	InterfejsFiltry InterfejsFiltry;
	InterfejsPrzegladaj InterfejsPrzegladaj;
	InterfejsIloscMiejsc InterfejsIloscMiejsc;
	std::cout << "Witaj w wyszukiwarce gastronomi" << std::endl;
	std::cout << "1: Wyszukaj po nazwie" << std::endl;
	std::cout << "2: Dodaj nowa restauracje" << std::endl;
	std::cout << "3: Filtry" << std::endl;
	std::cout << "4: Przegladaj" << std::endl;
	std::cout << "5: Ilosc miejsc" << std::endl;
	
	

	std::cin >> wybor;
	switch (wybor) {
	case 1:
		InterfejsWyszukiwarka.interfejs(ref);
		break;
	case 2:
		InterfejsDodaj.interfejs(ref);
		break;
	case 3:
		InterfejsFiltry.interfejs(ref);
		break;
	case 4:
	{
		InterfejsPrzegladaj.interfejs(ref);
		break;
	}
	case 5:
		InterfejsIloscMiejsc.interfejs(ref);
		break;
	default:
		std::cout << "podano zly numer" << std::endl;
		InterfejsInterfejs.interfejs(ref);
		break;
	}
	
}
