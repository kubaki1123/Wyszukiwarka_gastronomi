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
	restauracja(std::string nazwa_plik, std::string cena_plik, double ocena_plik, std::string rodzaj_plik);
	
	void print();

	std::string get_nazwa();
	std::string get_cena();
	double get_ocena();
	std::string get_rodzaj();

};

std::vector<restauracja> read();