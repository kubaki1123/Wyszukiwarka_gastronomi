#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct kategorie {
	std::string nazwa_kat;
	std::string cena_kat;
	std::string ocena_kat;
	std::string rodzaj_kuchni_kat;

};

class restauracja {
	std::string nazwa;
	std::string cena;
	double ocena;
	std::string rodzaj;

public:
	restauracja(std::string nazwa_plik, std::string cena_plik, double ocena_plik, std::string rodzaj_plik) {
		nazwa = nazwa_plik;
		cena = cena_plik;
		ocena = ocena_plik;
		rodzaj = rodzaj_plik;
	}
	
	void print() {
		std::cout << nazwa <<'\t' << cena <<'\t' << ocena <<'\t' << rodzaj << std::endl;
	}

};

void read(){
	kategorie kategorie;
	std::vector<restauracja>gastro_vector;
	std::fstream plik;
	std::string nazwa_plik;
	std::string cena_plik;
	double ocena_plik;
	std::string rodzaj_plik;

	plik.open("baza_gastronomi.txt", std::ios::in);
	if (plik.is_open()==true) {
		std::cout << "plik otwarty" << std::endl;
	}

	plik >> kategorie.nazwa_kat >> kategorie.cena_kat >> kategorie.ocena_kat >> kategorie.rodzaj_kuchni_kat;

	std::cout << kategorie.nazwa_kat << '\t' << kategorie.cena_kat << '\t' << kategorie.ocena_kat << '\t' << kategorie.rodzaj_kuchni_kat << '\t' << std::endl;

	while (true) {
		if (plik.eof()) {
			break;
		}
		plik >> nazwa_plik >> cena_plik >> ocena_plik >> rodzaj_plik;

		restauracja restauracja(nazwa_plik, cena_plik, ocena_plik, rodzaj_plik);

		gastro_vector.push_back(restauracja);

		restauracja.print();

		
	}

	



}