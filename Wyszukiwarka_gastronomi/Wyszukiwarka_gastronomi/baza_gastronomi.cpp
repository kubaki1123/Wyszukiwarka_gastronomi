#include"baza_gastronomi.h"


restauracja::restauracja(std::string nazwa_plik, std::string cena_plik, double ocena_plik, std::string rodzaj_plik)
	:nazwa(nazwa_plik),cena(cena_plik),ocena(ocena_plik),rodzaj(rodzaj_plik)
{

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




Data DataFill(restauracja obj)
{
	Data data;
	data.nazwa = obj.get_nazwa();
	data.cena = obj.get_cena();
	data.ocena = obj.get_ocena();
	data.rodzaj = obj.get_rodzaj();

	return data;
}

Node read() {

	kategorie kategorie;
	Data data;
	std::fstream plik;
	std::string nazwa_plik;
	std::string cena_plik;
	double ocena_plik;
	std::string rodzaj_plik;
	Node node;
	Node node2;
	

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

		data = DataFill(restauracja_obj);


		 node.nodeCreate(data, node);

		

	}
	
	

	return node;

	

	plik.close();
}


