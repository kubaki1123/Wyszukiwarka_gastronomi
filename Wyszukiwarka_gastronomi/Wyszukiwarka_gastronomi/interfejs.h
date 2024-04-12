#pragma once
#include<iostream>
#include "baza_gastronomi.h"
#include"find.h"
#include"cena.h"
#include"ocena.h"
#include"findtype.h"
#include"dodaj.h"

class Interfejs {

	virtual void interfejs(std::vector<restauracja>&ref) = 0;
};
class InterfejsInterfejs: public Interfejs {
public:
	void interfejs(std::vector<restauracja>&ref);
};
class InterfejsWyszukiwarka: public Interfejs {
public:
	void interfejs(std::vector<restauracja>& ref);
};
class InterfejsDodaj : public Interfejs {
public:
	void interfejs(std::vector<restauracja>&ref);
};
class InterfejsFiltry :Interfejs {
public:
	void interfejs(std::vector<restauracja>&ref);
};
class InterfejsPrzegladaj :Interfejs {
public:
	void interfejs(std::vector<restauracja>&ref);
};

void print_all(std::vector<restauracja>&ref);


/*
void interfejs();

void interfejs_wyszukiwarka(std::vector<restauracja> ref);

void interfejs_dodaj();

void interfejs_filtry();

void interfejs_przegladaj(std::vector<restauracja>ref);

void print_all(std::vector<restauracja>ref);
*/


