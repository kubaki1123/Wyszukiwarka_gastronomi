#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>



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

	void set_cena(std::string price);
	void set_nazwa(std::string name);
	void set_ocena(double rate);
	void set_rodzaj(std::string type);
	

};
struct kategorie {
	std::string nazwa_kat;
	std::string cena_kat;
	std::string ocena_kat;
	std::string rodzaj_kuchni_kat;
	friend void print_all(std::vector<restauracja> ref);
};

std::vector<restauracja> read();