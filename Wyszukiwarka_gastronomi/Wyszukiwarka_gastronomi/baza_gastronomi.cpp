#include"baza_gastronomi.h"


restauracja::restauracja(std::string nazwa_plik, std::string cena_plik, double ocena_plik, std::string rodzaj_plik) {
	nazwa = nazwa_plik;
	cena = cena_plik;
	ocena = ocena_plik;
	rodzaj = rodzaj_plik;
}
void restauracja::print() {
	std::cout << nazwa << '\t' << cena << '\t' << ocena << '\t' << rodzaj << std::endl;
}
std::string restauracja::get_nazwa() {
	return nazwa;
}
std::string restauracja::get_cena() {
	return cena;
}
double restauracja::get_ocena() {
	return ocena;
}
std::string restauracja::get_rodzaj() {
	return rodzaj;
}

void restauracja::set_cena(std::string price)
{
	cena = price;
}
void restauracja::set_nazwa(std::string name) {
	nazwa = name;
}

void restauracja::set_ocena(double rate)
{
	ocena = rate;
}

void restauracja::set_rodzaj(std::string type)
{
	rodzaj = type;
}



std::vector<restauracja> read() {

	kategorie kategorie;
	std::vector<restauracja>gastro_vector;
	std::fstream plik;
	std::string nazwa_plik;
	std::string cena_plik;
	double ocena_plik;
	std::string rodzaj_plik;



	plik.open("baza_gastronomi.txt", std::ios::in);
	if (plik.is_open() == true) {
		std::cout << "plik otwarty" << std::endl;
	}

	plik >> kategorie.nazwa_kat >> kategorie.cena_kat >> kategorie.ocena_kat >> kategorie.rodzaj_kuchni_kat;

	

	while (true) {
		if (plik.eof()) {
			break;
		}
		plik >> nazwa_plik >> cena_plik >> ocena_plik >> rodzaj_plik;

		restauracja restauracja_obj(nazwa_plik, cena_plik, ocena_plik, rodzaj_plik);

		

		gastro_vector.push_back(restauracja_obj);



	}
	
	return gastro_vector;
	plik.close();
}


