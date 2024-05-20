#pragma once
#include<iostream>
#include<cstdlib>
#include "baza_gastronomi.h"
#include"find.h"
#include"cena.h"
#include"ocena.h"
#include"findtype.h"
#include"dodaj.h"
#include"LinkedList.h"



class Interfejs {

	virtual void interfejs(Node& ref) = 0;
};
class InterfejsInterfejs: public Interfejs {
public:
	void interfejs(Node& ref);
};
class InterfejsWyszukiwarka: public Interfejs {
public:
	void interfejs(Node& ref);
};
class InterfejsDodaj : public Interfejs {
public:
	void interfejs(Node& ref);
};
class InterfejsFiltry :Interfejs {
public:
	void interfejs(Node& ref);
};
class InterfejsPrzegladaj :Interfejs {
public:
	void interfejs(Node& ref);
};
class InterfejsIloscMiejsc :Interfejs {
public:
	void interfejs(Node& ref);
};

void print_all(Node& ref);

void print_all_miejsca(Node& ref);




