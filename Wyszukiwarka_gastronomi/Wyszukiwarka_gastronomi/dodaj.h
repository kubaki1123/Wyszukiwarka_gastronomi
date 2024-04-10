#pragma once
#include<iostream>
#include<fstream>

class AddRestauracja {
public:
	std::string nazwa;
	std::string cena;
	double ocena;
	std::string rodzaj;
};


void dodaj_restauracje();