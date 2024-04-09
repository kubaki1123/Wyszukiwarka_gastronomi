#include"cena.h"

void cena_w_gore(std::vector<restauracja> ref) {
	std::vector<restauracja> vec;
	std::string bufor_cena;
	std::string bufor_nazwa;
	std::string bufor_rodzaj;
	double bufor_ocena;
	std::vector<restauracja>res;
	
	vec = ref;
	for (int i = 0; i < vec.size()-1; i++) {
		if (vec[i].get_cena() >= vec[i+1].get_cena()) {

			bufor_cena = vec[i].get_cena();
			bufor_nazwa = vec[i].get_nazwa();
			bufor_rodzaj = vec[i].get_rodzaj();
			bufor_ocena = vec[i].get_ocena();

			vec[i].set_cena(vec[i + 1].get_cena());
			vec[i].set_nazwa(vec[i + 1].get_nazwa());
			vec[i].set_rodzaj(vec[i + 1].get_rodzaj());
			vec[i].set_ocena(vec[i + 1].get_ocena());


			vec[i + 1].set_cena(bufor_cena);
			vec[i + 1].set_nazwa(bufor_nazwa);
			vec[i + 1].set_rodzaj(bufor_rodzaj); 
			vec[i + 1].set_ocena(bufor_ocena);
			
		}
	}
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i].get_nazwa() << '\t' << vec[i].get_cena() << '\t' << vec[i].get_ocena() << '\t' << vec[i].get_rodzaj() << std::endl;
	}

}

void cena_w_dol(std::vector<restauracja> ref) {
	std::vector<restauracja> vec;
	std::string bufor_cena;
	std::string bufor_nazwa;
	std::string bufor_rodzaj;
	double bufor_ocena;
	std::vector<restauracja>res;

	vec = ref;
	for (int i = 0; i < vec.size() - 1; i++) {
		if (vec[i].get_cena() >= vec[i + 1].get_cena()) {

			bufor_cena = vec[i].get_cena();
			bufor_nazwa = vec[i].get_nazwa();
			bufor_rodzaj = vec[i].get_rodzaj();
			bufor_ocena = vec[i].get_ocena();

			vec[i].set_cena(vec[i + 1].get_cena());
			vec[i].set_nazwa(vec[i + 1].get_nazwa());
			vec[i].set_rodzaj(vec[i + 1].get_rodzaj());
			vec[i].set_ocena(vec[i + 1].get_ocena());


			vec[i + 1].set_cena(bufor_cena);
			vec[i + 1].set_nazwa(bufor_nazwa);
			vec[i + 1].set_rodzaj(bufor_rodzaj);
			vec[i + 1].set_ocena(bufor_ocena);

		}
	}
	for (int i = vec.size()-1; i >= 0; i--) {
		std::cout << vec[i].get_nazwa() << '\t' << vec[i].get_cena() << '\t' << vec[i].get_ocena() << '\t' << vec[i].get_rodzaj() << std::endl;
	}



}